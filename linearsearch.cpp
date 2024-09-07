#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int n)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int hey[5]={5, 4, 8, -9, 10}, num;
    
    cout<<"Enter the number you want to check whether it is present in array or not:"<<endl;
    cin>>num;
    if (linearsearch(hey, 5, num))
    {
        cout<<"Yes "<<num<<" is present in the array"<<endl;
    }
    else
    {
        cout<<"No "<<num<<" is not present in the array"<<endl;
    }
    
}