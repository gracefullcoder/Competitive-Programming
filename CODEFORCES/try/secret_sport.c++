#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        cout << str[n-1] << endl;
    }
    return 0;
}