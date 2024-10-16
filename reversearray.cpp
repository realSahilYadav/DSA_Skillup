#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> reverse(vector <int> v)
{
    int start=0, end=v.size()-1;

    while (start<=end)
    {
        swap(v[start], v[end]);

        end--;
        start++;
    }

    return v;
}

int main()
{
    vector <int> v;

    v.push_back(4);
    v.push_back(12);
    v.push_back(3);
    v.push_back(7);
    v.push_back(11);

    vector <int> ans = reverse(v);

    for (auto i : ans)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}