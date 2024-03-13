#include <iostream>
using namespace std;

int main() {
	int tc;
    cin >> tc;
	while(tc--) {
	    int x,y,z;
	    cin >> x >> y >> z;
	    if(x*y <= 24*60*z){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
