#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    vector<int> a(5,1);

    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    v.push_back(1);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    v.push_back(2);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    cout<<"First element --> "<<v.front()<<endl;
    cout<<"Last element --> "<<v.back()<<endl;

    v.pop_back();
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    v.clear();
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    vector<int> last(v);
    cout<<"Capacity --> "<<last.capacity()<<endl;
    cout<<"Size --> "<<last.size()<<endl;
    
    for(int i: last)
    {
    cout<<i<<" ";
    }

    return 0;
}