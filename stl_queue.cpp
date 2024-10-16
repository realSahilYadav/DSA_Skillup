#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Sahil");
    q.push("Yadav");
    q.push("Kumar");

    cout<<"Size before pop"<<q.size()<<endl;
    cout<<"First element-> "<<q.front()<<endl;
    cout<<"Last element-> "<<q.back()<<endl;

    q.pop();
    
    cout<<"First element-> "<<q.front()<<endl;
    cout<<"Last element-> "<<q.back()<<endl;
    cout<<"Size after pop-> "<<q.size()<<endl;

    return 0;
}