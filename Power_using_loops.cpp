#include<iostream>
using namespace std;
int main()
{
    int a, b, ans=1;
    cout<<"Enter any number:"<<endl;
    cin>>a;
    cout<<"Enter which power of the number you want:"<<endl;
    cin>>b;
    for(int i=1; i<=b; i++)
    {
        ans=ans*a;
    }
    cout<<"The Value of "<<a<<" power "<<b<<" is "<<ans<<endl;
    return 0;
}