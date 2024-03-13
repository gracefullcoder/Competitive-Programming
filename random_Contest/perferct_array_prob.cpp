#include <iostream>

using namespace std;

int main()
{

    int n, test;

    cin >> test;
    while (test--)
    {

        cin >> n;

        int sum = (n * (n + 1)) / 2;
        cout << (sum % n) + 1 << " ";

        for (int i = 2; i <= n; i++)
        {

            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
