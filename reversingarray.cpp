#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;
    cout<<"Enter size of your array:"<<endl;
    cin>>size;
    int num[size];
    cout<<"Enter elements of your array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>num[i];
    }
    reverse(num, size);
    printArray(num, size);
    return 0;
}