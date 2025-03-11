#include<iostream>
using namespace std;

class Stack{
    vector<int> v;

public:
    void push(int val) {
        v.push_back(val);
    }

    int top() {
        return v[v.size()-1];
    }

    void pop() {
        v.pop_back();
    }

    bool empty() {
        return v.size()==0;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}