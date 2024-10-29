#include<iostream>
#include<string>

using namespace std;

string replaceSpace(string s)
{
    string result = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            result.push_back('@');
            result.push_back('4');
            result.push_back('0');
        }
        
        else
        {
            result.push_back(s[i]);
        }
    }

    return result;
}

int main()
{
    string s ="My Name is Sahil";

    cout<<replaceSpace(s)<<endl;

    return 0;
}