#include<iostream>
using namespace std;

int getMin(int arr[], int size)
{
    int min=INT_MAX;
    for (int i=0; i<size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size)
{
    int max=INT_MIN;
    for (int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
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
    cout<<"Maximum value of your array is: "<<getMax(num, size)<<endl;
    cout<<"Minimum value of your array is: "<<getMin(num, size)<<endl;
    return 0;
}