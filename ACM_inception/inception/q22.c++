#include <iostream>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long count = 0;
        long long count1 = 0;
        long long count2 = 0;

        for (long long i = 0; i < n; i++)
        {
            if (arr[i] % k == 0 && (i + 1) % k == 0)
            {
                count += n - 1 - i / k;
                count1++;
            }

            if (arr[i] % k != 0 && (i + 1) % k == 0)
            {
                for (long long l = i + k; l < n; l = k + l)
                {
                    if (arr[l] % k == 0)
                    {
                        count++;
                    }
                }
            }
            
            if (arr[i] % k == 0 && (i + 1) % k != 0)
            {
                count2++;
            }
        }

        count += ((n / k) - count1) * count2;
        cout << count << endl;
    }
    return 0;
}
