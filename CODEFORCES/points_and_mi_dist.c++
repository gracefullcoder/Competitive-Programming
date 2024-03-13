#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        sort(arr, arr + 2 * n, greater<int>());

        for (int i = 0; i < n - 1; i++)
        {
            sum += abs(arr[i] - arr[i + 1]) + abs(arr[2 * n - i - 1] - arr[2 * n - i - 2]);
        }
        cout << sum << endl;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " " << arr[2 * n - 1 - i] << endl;
        }
    }
    return 0;
}