#include<iostream>
using namespace std;
int main()
{
    int arr[7]={10, 1, 7, 4, 8, 2, 11};
    int n=7;
    for (int i=1; i<n; i++)
    {
        int j = i-1;
        int temp=arr[i];
        while ( j>=0)
        {
            if (temp < arr[j])
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}