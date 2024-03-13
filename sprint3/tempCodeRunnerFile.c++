#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if (k > 0)
    {
        int arr[n * k];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            for (int j = 1; j < k; j++)
            {
                arr[n * j + i] = arr[i];
            }
        }

        int maxsum = INT_MIN;
        int currsum = 0;
        for (int i = 0; i < n * k; i++)
        {
            currsum += arr[i];
            if (currsum >= 0)
            {
                if (maxsum < currsum)
                {
                    maxsum = currsum;
                }
            }
            else
            {
                currsum = 0;
            }
        }

        cout << maxsum;
        return 0;
    }
    else
    {
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxsum = INT_MIN;
        int currsum = 0;
        for (int i = 0; i < n ; i++)
        {
            currsum += arr[i];
            if (currsum >= 0)
            {
                if (maxsum < currsum)
                {
                    maxsum = currsum;
                }
            }
            else
            {
                currsum = 0;
            }
        }

        cout << maxsum;
        return 0;
    }
}
