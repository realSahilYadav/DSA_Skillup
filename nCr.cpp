#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int a=factorial(n-r), b=factorial(n), c=factorial(r), ans;
    ans=b/(a*c);
    return ans;
}
int main()
{
    int n, r;
    cin>>n>>r;
    int answer=nCr(n,r);
    cout<<answer<<endl;
    return 0;
}