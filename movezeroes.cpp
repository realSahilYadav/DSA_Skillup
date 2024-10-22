#include<iostream>

using namespace std;

void moveZeroes(int arr[], int n)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[index]);
            index++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int arr[6]={0, 2, 0, 0, 1, 3};

    moveZeroes(arr, 6);
    print(arr, 6);

    return 0;
}