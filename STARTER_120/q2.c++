#include <iostream>
using namespace std;

bool isVowel(char ch) {
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main()
{
    // your code goes here
    int tc;
    cin >> tc;

    while (tc--)
    {
        string str;
        cin >> str;
        bool ans = true;
        for (int i = 0; i < 8; i++)
        {
            if ((i == 1) || (i == 3) || (i == 5))
            {
                if (!isVowel(str[i]))
                {
                    ans = false;
                    break;
                }
            }
            else
            {
                if (isVowel(str[i]))
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
