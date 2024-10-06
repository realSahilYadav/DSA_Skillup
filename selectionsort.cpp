#include<iostream>
using namespace std;

int main()
{
    int arr[7]={5,8,7,12,1,6,92};
    int n=7;

    for (int i=0; i<n; i++)
    {
        int minIndex=i;

        for (int j=i+1; j<n; j++)
        {
            if (arr[minIndex]>arr[j])
            {
                swap(arr[minIndex], arr[j]);
            }
        }    
    }

    for(int k=0; k<n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}