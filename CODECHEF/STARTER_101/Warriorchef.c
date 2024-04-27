#include <iostream>
#include <vector>
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
        vector<int> enemies(N);
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> enemies[j];
            sum += enemies[j];
        }

        if (sum >= H)
        {
            int R = 0;
            for (int j = 0; j < N; j++)
            {
                sum = 0;
                R++;
                for (int k = 0; k < N; k++)
                {
                    if (enemies[k] > R)
                    {
                        sum += enemies[k];
                    }
                }
                if (H >= sum)
                {
                    cout << R << endl;
                }
                break;
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
