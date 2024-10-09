#include<iostream>
using namespace std;
int main()
{
    int arr[5]={6, 2, 8, 4, 10};
    int n=5;
    for (int i=1; i<n; i++)
    {
        bool swapped = false;
        for (int j=0; j<n-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                bool swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

    for (int j=0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}