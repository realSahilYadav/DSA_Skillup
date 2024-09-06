#include <iostream>
using namespace std;
int main(){
    char ch='a';
    int num=1;
    cout<<endl;
    switch(ch)
    {
    case 1: cout<<"First"<<endl;
            break;
    
    case 'a': switch (num)
    {
    case 1: cout<<"The value of num is "<<num<<endl;
        break;
    
    default: cout<<"Default"<<num<<endl;
        break;
    }
    break;
    
    case 3: cout<<"Third"<<endl;
            break;
    
    default: cout<<"It is default"<<endl;
    }
    cout<<endl;
    
    return 0;

}