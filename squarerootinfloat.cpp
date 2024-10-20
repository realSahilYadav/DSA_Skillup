#include<iostream>
using namespace std;

long long int squareRoot(int n)
{
    int start = 0;
    int end = n;
    long long int mid = 1;
    long long int sq = 1;
    int target = n;
    int rem = 1;

    while (start <= end)
    {
        mid = start + (end - start)/2;
        sq = (mid * mid);
        rem = target / sq;

        if (rem == 1)
        {
            return mid;
        }

        if (rem < 1)
        {
            end = mid - 1;
        }

        if (rem > 1)
        {
            start = mid + 1;
        }
    }

    return -1;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        
        for (double j = ans; (j * j) < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int tempSol = squareRoot(n);

    cout<<"Square root of "<<n<<" is "<<morePrecision(n, 3, tempSol);

    return 0;

}