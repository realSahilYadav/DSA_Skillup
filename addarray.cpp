#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>arr)
{
    for (auto i : arr)
    {
        cout<<arr[i]<<" ";
    }
}

vector<int> reverse(vector<int>arr)
{
    int start = 0, end = arr.size() - 1;

    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }

    return arr;
}

vector<int> addArray(int arr1[], int m, int arr2[], int n)
{
    int i = m - 1;
    int j = n - 1;

    int carry = 0;
    vector<int>ans;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    
    while(carry != 0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main()
{
    int arr1[5] = {2, 3, 4, 7, 6};
    int arr2[3] = {4, 5, 8};

    vector<int> arr3 = addArray(arr1, 5, arr2, 3);
    print(arr3);

    return 0;
}