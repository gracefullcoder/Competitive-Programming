#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int c = 1;
        int c1 = 1;
        int c2;

        if(n % 2 == 1) {
           c2 = 2;
        }
        else{
            c2 = 1;
        }

        for (int i = 1; i <= n; i++)
        {
            if (n % 2 == 1)
            {   
                if (i < 2 * c + 1)
                {
                    cout << c1 << " ";
                    c1 += 2;
                    if (i != n)
                    {
                        cout << c1 << " ";
                        c1 += 2;
                        i++;
                    }
                }
                else
                {
                    cout << c2 << " ";
                    c2 += 2;
                    if (i != n)
                    {
                        cout << c2 << " ";
                        c2 += 2;
                        i++;
                    }
                    c += 2;
                }
            }
            else
            {   
                if (i == 2 * c1 + 1)
                {
                    cout << 2 * c1 + 2 << " ";
                    if (i != n)
                    {
                        cout << 2 * c1 + 1<< " ";
                        i++;
                        c1 += 2;
                    }
                }
                else
                {
                    cout << i << " ";
                }
            }
        }

        cout << endl;
    }
    return 0;
}
