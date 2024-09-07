#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout<<"Printing Array..."<<endl;
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main()
{
    int first[5]={2,5,6,8,9};
    printArray(first, 6);
    return 0;
}