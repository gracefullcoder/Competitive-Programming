#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void pressed_key(string inpstr)
{
    vector<int> lcasew;
    vector<int> ucasew;
    lcasew.push_back(-1);
    int l = 1, u = 1;
    ucasew.push_back(-1);
    int ipc = 0;
    for (char c : inpstr)
    {
        //  cout << lcasew.back() << "  " << ucasew.back() << "  ";
        if (c == 'b')
        {
            if (lcasew.back() != -1)
            {
                lcasew.pop_back();
                l--;
            }
        }
        else if (c == 'B')
        {
            if (ucasew.back() != -1)
            {
                ucasew.pop_back();
                u--;
            }
        }
        else
        {
            if (isupper(c))
            {
                ucasew.push_back(ipc);
                u++;
            }
            else
            {
                lcasew.push_back(ipc);
                l++;
            }
        }
        ipc++;
    }
    // cout << u << "   " << l << "   " << endl;
 
    // for (int i = 0; i < u; i++)
    // {
    //     cout << "u" << ucasew[i] << "   ";
    // }
    // cout << endl;
    // for (int i = 0; i < l; i++)
    // {
    //     cout << "  " <<lcasew[i];
    // }
    int i=1,j=1;
    while(i < u && j < l) {
        if(ucasew[i] < lcasew[j]){
            cout << inpstr[ucasew[i]];
            i++;
        }else{
            cout << inpstr[lcasew[j]];
            j++;
        }
    }
 
    while(i < u) {
        cout << inpstr[ucasew[i]];
            i++;
    }
 
    while(j < l) {
        cout << inpstr[lcasew[j]];
            j++;
    }
    return;
}
 
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string inpstr;
        cin >> inpstr;
        pressed_key(inpstr);
        cout << endl;
    }
    return 0;
}