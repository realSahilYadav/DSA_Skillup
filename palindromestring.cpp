#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}


bool checkPalindrome(char arr1[])
{
    
    char arr2[20];
    int last = getLength(arr1) - 1;

    for (int i = 0; i < getLength(arr1); i++)
    {
        arr2[i] = arr1[last--];
    }

    for (int i = 0; i < getLength(arr1); i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char string[20];
    cout<<"Enter your string:"<<endl;

    cin>>string;
    cout<<"Is string palindrome: "<<checkPalindrome(string)<<endl;

    return 0;
}