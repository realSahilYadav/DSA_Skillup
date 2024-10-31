#include<iostream>
#include<vector>

using namespace std;

vector<int>rowWiseSum(int arr[][4], int m)
{
    vector<int>result;
    int sum = 0;

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
        result.push_back(sum);
        sum = 0;
    }

    return result;
}

int main()
{
    vector<int>sum;
    int arr[3][4] = {1, 2, 3, 1, 1, 1, 5, 4, 6, 6, 8, 4};

    sum = rowWiseSum(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout<< sum[i] << endl;
    }

    return 0;
}