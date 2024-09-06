#include <iostream>
using namespace std;
int main(){
    char ch='a';
    cout<<endl;
    switch(ch)
    {
    case 'a': cout<<"First"<<endl;
            break;
    
    case 2: cout<<"Second"<<endl;
            break;
    
    case 3: cout<<"Third"<<endl;
            break;
    
    default: cout<<"It is default"<<endl;
    }
    cout<<endl;
    
    return 0;

}