#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout<<"Enter the value of 'a':"<<endl;
    cin>>a;
    cout<<"Enter the value of 'b':"<<endl;
    cin>>b;
    cout<<"Enter the operation you want to perform"<<endl;
    cout<<"Enter '+' for addition"<<endl;
    cout<<"Enter '-' for subtraction"<<endl;
    cout<<"Enter '/' for division"<<endl;
    cout<<"Enter 'x' for multiplication"<<endl;
    cout<<"Enter '%' for remainder"<<endl;
    cin>>op;
    switch (op)
    {
        case '+': cout<<"Value of a+b is "<<a+b<<endl;
                  break;
        
        case '-': cout<<"Value of a-b is "<<a-b<<endl;
                  break;
        
        case '/': cout<<"Value of a/b is "<<a/b<<endl;
                  break;
        
        case 'x': cout<<"Value of a*b is "<<a*b<<endl;
                  break;
        
        case '%': cout<<"Value of a%b is "<<a%b<<endl;
                  break;
        
        default: cout<<"You entered invalid operation"<<endl;
                 cout<<"Please start again"<<endl;
                 break;
    }
    return 0;
}