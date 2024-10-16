#include<iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0, end = size -1, mid = 0;

    while (start <= end)
    {
        mid=start + (start + end)/2;

        if (arr[mid] >= arr[0])
        {
            start = mid +1;
        }

        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int arr[5]={7,9,1,2,3};

    cout<<"Pivot element of the given array will be "<<getPivot(arr, 5);
    return 0;
}