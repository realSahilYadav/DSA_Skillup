#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string>m;
    m[1]= "Yadav";
    m[2]= "Sahil";
    m[13]= "Kumar";

    cout<<"Before Erase"<<endl;

    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding 13-> "<<m.count(13)<<endl;
    cout<<"Finding -13-> "<<m.count(-13)<<endl;

    cout<<endl;

    m.erase(13);

    cout<<"After Erase"<<endl;

    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it = m.find(5);

    for(auto i=it; i != m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }

    return 0;
}