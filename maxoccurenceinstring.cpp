#include<iostream>
#include<string>

using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = i;
        }
    }
    return max;
}

char getMaxOccChar(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        int number;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            number = s[i] - 'a';
        }

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            number = s[i] - 'A';
        }

        arr[number] = arr[number] + 1;
    }

    int max = getMax(arr, 26);

    char maxChar = max + 'a';

    return maxChar;
}

int main()
{
    string check = "testsample";

    cout<<getMaxOccChar(check);

    return 0;
}