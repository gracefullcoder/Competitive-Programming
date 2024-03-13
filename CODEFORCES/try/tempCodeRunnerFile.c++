#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        int countarr[100] = {0};
        int num[2];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            countarr[arr[i] - 1]++;
        }

        int count2 = 0;
        int case1 = 1;
        int case2 = 2;

        for (int i = 0; i < 100; i++)
        {
            if (countarr[i] >= 2)
            {
                num[count2] = i + 1;
                count2++;
            }

            if (count2 > 2)
            {
                break;
            }
        }

        cout << num[0] << " " << num[1] << endl;
        if (count2 < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {

                if (arr[i] == num[0])
                {
                    if (countarr[arr[i] - 1] >= 3)
                    {
                        cout << case1 << " ";
                        countarr[arr[i] - 1]--;
                    }
                    else
                    {
                        cout << case1 << " ";
                        case1++;
                    }
                }
                else if(arr[i] == num[1])
                {
                    if (countarr[arr[i] - 1] >= 3)
                    {
                        cout << case2 << " ";
                        countarr[arr[i] - 1]--;
                    }
                    else
                    {
                        cout << case2 << " ";
                        case2++;
                    }
                }
                else
                {
                    cout << 1 << " ";
                }
            }
        }
    }
    return 0;
}