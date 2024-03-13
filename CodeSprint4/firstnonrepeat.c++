#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << arr[0] << endl;
    }
    else
    {
        sort(arr, arr + n);
        int i;
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                cout << arr[i] << endl;
                break;
            }
            while ((arr[i] == arr[i + 1]) && (i < n - 1))
            {
                i++;
            }
        }

        if (i == n - 1)
        {
            if (arr[n - 2] != arr[n - 1])
            {
                cout << arr[n - 1] << endl;
            }
        }
        if (i == n)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
