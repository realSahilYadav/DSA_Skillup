#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start=0, end=size-1, mid=0, ans=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        
        else if (key>arr[mid])
        {
            start=mid+1;
        }

        else
        {
            end=mid-1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start=0, end=size-1, mid=0, ans=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        
        else if (key>arr[mid])
        {
            start=mid+1;
        }

        else
        {
            end=mid-1;
        }
    }
    return ans;
}

int main()
{
    int even[10]={1,2,3,3,3,3,5,6,7,8}, totalOcc;
    totalOcc=(lastOcc(even, 10, 3)-firstOcc(even, 10, 3))+1;
    cout<<"Total no. of occurence of 3 is "<<totalOcc;
    return 0;
}