#include<iostream>
using namespace std;

bool checkRotated(int arr[], int size)
{
    int count = 0;
    
    for (int i = 1; i < size; i++)
    {
        if (arr[i-1] > arr[i] )
        {
            count++;
        }
    }

    if (arr[size-1] > arr[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{
    int arr[5] = {3, 4, 5, 1, 2};
    cout << checkRotated (arr, 5);

    return 0;
}