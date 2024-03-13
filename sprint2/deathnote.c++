#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int arr[n];
    int currmax = 1;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        currmax = currmax < arr[i] ? arr[i] : currmax;
        sum += arr[i];
    }

    if (h == n)
    {
        cout << currmax;
    }

    else if (sum <= h)
    {
        cout << 1;
    }

    else
    {
        int minIntesity = sum % h == 0 ? sum / h : sum / h + 1;

        sort(arr, arr + n, greater<int>());

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= minIntesity)
            {
                break;
            }
            count++;
        }

        h = h - (n - count);

        int timecount = 0;

        for (int i = 0; i < count; i++)
        {
            timecount += ceil(((double)arr[i] / (double)minIntesity));
        }

        if (timecount == h)
        {
            cout << minIntesity;
            return 0;
        }

        int left = minIntesity;
        while (timecount > h)
        {
            minIntesity = arr[count - 1];
            h--;
            count--;

            for (int i = 0; i < count; i++)
            {
                timecount += ceil(((double)arr[i] / (double)minIntesity));
            }

            if(timecount < h) {
                h++;
                count++;
                break;
            }
        }
        

        int temp = ceil(((double)arr[0] / (double)minIntesity)) - (timecount - h);
        cout << arr[0] / temp;
    }

    return 0;
}
