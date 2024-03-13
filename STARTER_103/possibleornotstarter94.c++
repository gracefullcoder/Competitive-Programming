// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, b;
        cin >> n >> b;
        int arr[n];
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == b)
                check = 1;
        }

        if (!check)
        {
            sort(arr, arr + n);

            int index = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > b)
                {
                    index = i;
                    break;
                }
            }

            for (int i = index; i < n - 1; i++)
            {
                for (int j = index + 1; j < n; j++)
                {
                    if ((arr[i] & arr[j]) == b)
                    {
                        check = 1;
                        break;
                    }
                }
            }
        }
        if(check == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // your code goes here
    }
    return 0;
}