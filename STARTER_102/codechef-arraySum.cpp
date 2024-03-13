#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int a = (3 * n) / 2;
            if (k % 2 == (n / 2) % 2)
            {

                if (k < a)
                {
                    cout << -1 << endl;
                }
                else
                {

                    for (int i = 0; i < n - 1; i++)
                    {

                        if (i < n / 2)
                        {
                            cout << 1 << " ";
                        }
                        else
                        {
                            cout << 2 << " ";
                        }
                    }

                    cout << k - a + 2;
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
