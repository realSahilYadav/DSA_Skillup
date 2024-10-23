#include<iostream>
#include<algorithm>

using namespace std;

void rotate(int arr[], int k, int size)
{
    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[(i+k)%size] = arr[i];
    }

    arr = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    rotate(arr, 3, 7);
    for (auto i : arr)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}