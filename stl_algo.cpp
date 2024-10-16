#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<binary_search(v.begin(), v.end(), 5)<<endl;
    cout<<"Lower Bound "<<lower_bound(v.begin(), v.end(), 4)-v.begin()<<endl;
    cout<<"Upper Bound "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"Min of a & b "<<min(a,b)<<endl;
    cout<<"Max of a &b "<<max(a,b)<<endl;

    cout<<"before swap"<<endl;

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    swap(a,b);

    cout<<"after swap"<<endl;
    
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());

    cout<<abcd<<endl;

    rotate(v.begin(), v.begin()+1, v.end());

    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}