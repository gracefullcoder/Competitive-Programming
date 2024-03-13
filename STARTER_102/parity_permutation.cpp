#include <iostream>
using namespace std;
long long int factorial(long long int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1) % 1000000007;
}

int main()
{
    long long int tc;
    cin >> tc;

    while (tc > 0)
    {
        long long int N, K;
        long long int oddcount = 0;
        cin >> N >> K;
        long long int arr[N];

        for (long long int i = 0; i < N; i++)
        {
            cin >> arr[i];

            if (arr[i] % 2 == 1)
            {
                oddcount++;
            }
        }
        
        if ((oddcount == N || oddcount == 0) && K == 0)
        {
            cout << factorial(N) % 1000000007 << endl;
        }
        else if(oddcount == N/2 && oddcount == N - N/2 && K == 1) {
            cout << 2*(factorial(oddcount) * factorial(N - oddcount)) % 1000000007 << endl;
        }

        else if ((oddcount == N/2 || oddcount == N - N/2) && K == 1)
        {
            cout << (factorial(oddcount) * factorial(N - oddcount)) % 1000000007 << endl;
        }

        else
        {
            cout << 0 << endl;
        }

        tc--;
    }
}