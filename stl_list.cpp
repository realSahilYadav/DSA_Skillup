#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for (int i: l)
    {
        cout<<i<<" ";
    }

    // l.pop_back();
    // for (int i: l)
    // {
    //     cout<<i<<" ";
    // }

    // l.pop_front();
    // for(int i: l)
    // {
    //     cout<<i<<" ";
    // }

    cout<<"Element at index 1-> "<<l.at(1)<<endl;
    cout<<"First element-> "<<l.front();
    cout<<"Last element-> "<<l.back();
    cout<<"Empty or not-> "<<l.empty();

    l.clear();
    for (int i: l)
    {
        cout<<i<<" ";
    }
    return 0;
}