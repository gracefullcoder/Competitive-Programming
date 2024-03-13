#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int l,r,k;
        cin >> l >> r >> k;
        if(l == r) {
            if(l > 1) {
                cout <<"YES"<<"\n";
            }else{
                cout << "NO" <<"\n";
            }
        }
        else if(l%2 == 1 && r %2 == 1) {
            if(k >= (r-l)/2 + 1){
                cout << "YES"<<"\n";
            }else{
                cout << "NO"<<"\n";
            }
        }
        else if((l%2 == 0 && r %2 == 1) || (l%2 == 1 && r %2 == 0)){
            if(k >= (r-l +1)/2) {
                cout << "YES"<<"\n";
            }else{
                cout << "NO"<<"\n";
            }
        }
        else{
            if(k >= (r-l)/2) {
                cout << "YES"<<"\n";
            }else{
                cout << "NO"<<"\n";
            }
        }
    }
}