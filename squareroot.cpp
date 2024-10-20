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

int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    cout<<"Square root of "<<n<<" is "<<squareRoot(n);

    return 0;

}