#include<iostream>
using namespace std;

int binarySearch (int arr[], int size, int key)
{
    int start=0, end=size-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
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
        
        mid=start+(end-start)/2;
    }
    return -1;
}

int main ()
{
    int series[8]={12, 18, 19, 28, 36, 42, 44, 56};

    int index=binarySearch(series, 8, 12);

    cout<<"Index of 12 is "<<index<<endl;
    return 0;
}
