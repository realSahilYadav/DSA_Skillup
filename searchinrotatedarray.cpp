#include<iostream>
using namespace std;

int binarySearch (int arr[], int start, int n, int key)
{
    int end=n, mid=0;

    while (start<=end)
    {
        mid=start+(end-start)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

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

int searchElement(int arr[], int size, int target)
{
    int pivot = getPivot(arr, size);
        if (arr[pivot] <= target && arr[size-1]>= target)
        {
            return binarySearch(arr, pivot, size-1, target);
        }

        else
        {
            return binarySearch(arr, 0, pivot-1, target);
        }
}

int main()
{
    int arr[5]={7,9,1,2,3};
    int key;
    cout<<"Enter the element you want to search:"<<endl;
    cin>>key;
    cout<<key<<" has index: "<<searchElement(arr, 5, key)<<"in given array"<<endl;;
    return 0;
}