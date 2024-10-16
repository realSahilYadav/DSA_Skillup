#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for (int i: d)
    {
        cout<<i<<" ";
    }

    // d.pop_back();
    // for (int i: d)
    // {
    //     cout<<i<<" ";
    // }

    // d.pop_front();
    // for(int i: d)
    // {
    //     cout<<i<<" ";
    // }

    cout<<"Element at index 1-> "<<d.at(1)<<endl;
    cout<<"First element-> "<<d.front();
    cout<<"Last element-> "<<d.back();
    cout<<"Empty or not-> "<<d.empty();

    d.clear();
    for (int i: d)
    {
        cout<<i<<" ";
    }
    
    return 0;
}