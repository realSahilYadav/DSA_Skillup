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
    int even[5]={1,2,3,3,5};
    cout<<firstOcc(even, 5, 3)<<" "<<lastOcc(even, 5, 3)<<endl;
    return 0;
}