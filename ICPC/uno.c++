#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int num, ncard;
        cin >> num >> ncard;

        string card;
        cin >> card;
        int revcount = 0;
        int value = 1;
        
        for (int i = 0; i < ncard; i++)
        {
            if (revcount % 2 == 0)
            {
                if (card[i] == 'U')
                {
                    value = (value + 1) % num;
                    if (value == 0)
                        value = num;
                }
                if (card[i] == 'S')
                {
                    value = (value + 2) % num;
                    if (value == 0)
                        value = num;
                }
                if (card[i] == 'R')
                {
                    value = (value -1) % num;
                    revcount++;
                    if (value == 0)
                        value = num;
                }
            }
            else
            {
                if (card[i] == 'U')
                {
                    value = (value - 1) % num;
                    if (value == 0)
                        value = num;
                }
                if (card[i] == 'S')
                {
                    value = (value - 2) % num;
                    if (value == 0)
                        value = num;
                }
                if (card[i] == 'R')
                {
                    value = (value + 1) % num;
                    revcount++;
                    if (value == 0)
                        value = num;
                }
            }
            
        }
        cout<<value<<endl;
    }

    return 0;
}