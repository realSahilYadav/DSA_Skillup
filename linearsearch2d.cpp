#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int m, int key)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           if (arr[i][j] == key)
           {
            return 1;
           }
        }
    }

    return 0;
}

int main()
{
    int arr[3][4] = {13, 14, 7, 5, 68, 22, 3, 19, 43, 73, 36, 12};
    int target;
    cout << "Enter Target" << endl;
    cin >> target;
    if (isPresent (arr, 3, target))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}