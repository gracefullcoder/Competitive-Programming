
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    
    int medianarr[m * n];

    for (int i = 0; i < m*n; i++)
    {
       cin >> medianarr[i];
    }
    sort(medianarr, medianarr + m*n);

    cout << medianarr[((m*n) / 2)];

    // if (n % 2 != 0)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         medianarr[i] = arr[i][(n) / 2];
    //     }
    //     sort(medianarr, medianarr + m);
    // }
    // else
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         medianarr[i] = (arr[i][n / 2] + arr[i][(n / 2) - 1]) / 2;
    //     }
    //     sort(medianarr, medianarr + m);
    // }
    // if (m % 2 != 0)
    // {
    //     cout << medianarr[(m / 2)];
    // }
    // else
    // {
    //     cout << (medianarr[(m / 2)] + medianarr[(m / 2) - 1]) / 2;
    // }
    return 0;
}