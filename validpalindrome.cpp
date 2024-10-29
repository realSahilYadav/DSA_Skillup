#include<iostream>
#include<string>

using namespace std;

char toLowerCase(char c)
{
    if ((c >= 'a' && c <= 'z'))
    {
        return c;
    }

    else
    {
        char temp;
        temp = c - 'A' + 'a';
        return temp;
    }
}

bool validChar(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

bool validPalindrome(string s)
{
    string temp = "";

    for (int j = 0; j < s.size(); j++)
    {
        if (validChar(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    for (int j = 0; j < temp.size(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    
    int start = 0;
    int end = temp.size() - 1;

    while (start <= end)
    {
        if (temp[start] != temp[end])
        {
            return 0;
        }

        else
        {
            start++;
            end--;
        }
    }

    return 1;   
}

int main()
{
    string check = "A man, A plan, A canal : Panama";

    cout<<validPalindrome(check);

    return 0;
}