#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numofTC;
    cin >> numofTC;
    int i = 0;
    while (i < numofTC)
    {
        int N, H;
        cin >> N >> H;
        int enemies[N];
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> enemies[j];
            sum += enemies[j];
        }

        if (sum >= H)
        {   
            int newsum = sum;
            sort(enemies, enemies+N);
            for (int j = 0; j < N; j++)
            {
                int R = enemies[j];
                newsum -= R;
                // while(enemies[j + 1] == R && j < N) {
                //     newsum -= R;
                //     j++;
                // }
                if (H > newsum)
                {
                    cout << R << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "0\n";
        }

        i++;
    }
    return 0;
}
