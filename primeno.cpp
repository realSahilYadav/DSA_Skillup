#include<iostream>
using namespace std;
bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    cout<<"Enter the Number:"<<endl;
    cin>>a;
    if (isPrime(a))
    {
        cout<<a<<" is Prime"<<endl;
    }
    else{
        cout<<a<<" is not Prime"<<endl;
    }
    return 0;
}