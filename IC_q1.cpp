#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        
        int earnings = 0;
        
        if (y <= x)
        {
            earnings = y*1;
        }
        
        else
        {
            earnings = x*1 + 2*(y-x);
        }
        
        cout<<earnings<<endl;
        
    }
    return 0;
}
