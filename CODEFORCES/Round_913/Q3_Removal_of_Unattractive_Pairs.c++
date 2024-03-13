#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {   int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[26] = {0};
        for (char c : s)
        {   
            // cout << c-97 << " " ;
            arr[c - 97]++;
        }
        int maxi = 0;
        for (int i = 0; i < 26; i++)
        {
            maxi = max(maxi, arr[i]);
        }

        if (n % 2 == 0)
        {
            if (maxi <= (n/2))
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 2*maxi - n << endl;
            }
        }
        else
        {
            if (maxi <= (n + 1) / 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2*maxi - n << endl;
            }
        }
    }
    return 0;
}