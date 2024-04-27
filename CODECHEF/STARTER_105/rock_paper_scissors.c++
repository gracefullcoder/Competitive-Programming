// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
// 	int tc;
//     cin >> tc;
//     while(tc--) {
//         int n;
//         cin >> n;
//         string p1,p2;
//         cin >> p1 >> p2;
//         int c1 = 0,c2 = 0;
//         for(int i = 0 ; i < n ; i++){
//             if(p1[i] == 'R' && p2[i] == 'P'){
//                 c2++;
//             }
//             else if(p1[i] == 'P' && p2[i] == 'R'){
//                 c1++;
//             }

//             if(p1[i] == 'S' && p2[i] == 'P'){
//                 c1++;
//             }
//             else if(p1[i] == 'P' && p2[i] == 'S'){
//                 c2++;
//             }
            
//             if(p1[i] == 'R' && p2[i] == 'S'){
//                 c1++;
//             }
//             else if(p1[i] == 'S' && p2[i] == 'R'){
//                 c2++;
//             }
//         }
//         // cout << c1 <<  " " << c2 << endl;
//         if(c1 > c2) {
//             cout << 0 << endl;
//         }
//         else if(c1 == c2){
//             cout << 1 << endl;
//         }
//         else{
//             int c = 0;
//             int flag = 0;
//             while(c1 < c2) {
//                 c1++;
//                 c2--;
//                 c++;
//                 if(c1 == c2){
//                     cout << c + 1 << endl;
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(!flag){
//                 cout << c<< endl;
//             }
//         }
//     }
// 	return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int tc;
	cin >>tc;
	
	while(tc--){
	    int n,k;
	    cin >> n >>k;
	    if(k == 1){
	        cout << 0 << endl;
	    }
	    else if(k == n/2){
	        cout << 0 << endl;
	    }
	    else{
	        cout << n/2 << endl;
	    }
	}
	return 0;
}
