#include<iostream>
using namespace std;

int peakInMountain(int arr[], int size)
{
    int start = 0, end = size -1, mid = 0;

    while (start <= end)
    {
        mid=start + (start + end)/2;

        if (arr[mid] < arr[mid+1])
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
    int arr[5]={3,4,5,1};

    cout<<"Peak element of the given array will be "<<peakInMountain(arr, 5);
    return 0;
}