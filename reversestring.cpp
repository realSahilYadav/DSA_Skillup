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

void reverse(char arr[])
{
    int start = 0;
    int end = getLength(arr) - 1;

    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    char name[20];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    reverse(name);
    cout<<"Your reversed name is: "<<endl<<name;

    return 0;
}