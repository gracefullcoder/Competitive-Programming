#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
    while(tc > 0) {
        int n,k;
        cin >> n >>k;
        string s;
        cin >> s;
        int zero = 0 , one = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     if(s[i] == '0') {
        //         zero++;
        //     }
        //     else if(s[i] == '1') {
        //         one++;
        //     }
        // }
        
        // if(zero == n || one == n) {
        //     cout << 0 << endl;
        // }

        // else{
        //     if(zero == one) {
        //         cout << zero <<endl;
        //     }
        //     else if(zero > one){
        //         if(one % 2 == 0){
        //             cout << one /2 << endl;
        //         }
        //         else{
        //             if(zero % 2 == 0){
        //                 cout << zero/2 <<endl; 
        //             }
        //             else{
        //                 cout << zero/2 + 1 << endl;
        //             }
        //         }
        //     }
        //     else if(zero < one) {
        //         if(one % 2 != 0){
        //             cout << zero << endl;
        //         }
        //         else{
        //             int select = min(zero,one/2);
        //             cout << select <<endl;
        //         }
        //     }
        // }
        string s2 = s;
        int allzerocount = 0;
        int allonecount = 0;
        for(int i = 0 ; i < n - k ;i++) {
            // int c = 1;
            int j = i + k;
            //making of 0
            while(j < n) {
                if(s[i] == '1' && s[j] == '1'){
                    allzerocount++;
                    s[i] = '0';
                    s[j] = '0';
                }
                if(s2[i] == '1' && s2[j] == '0'){
                    allonecount++;
                    s2[i] = '1';
                    s2[j] = '1';
                }
                if(s2[i] == '0' && s2[j] == '1'){
                    allonecount++;
                    s2[i] = '1';
                    s2[j] = '1';
                }
                // c++;
                j += k;
            }
        }
        int zerocheck = 1 , onecheck = 1;
        for(int i = 0 ; i < n ; i++) {
            if(s[i] != '0') {
                zerocheck = 0;
            }
            if(s2[i] != '1') {
                onecheck = 0;
            }
        }
        if(onecheck && zerocheck) {
            cout << min(allonecount,allzerocount) << endl;
        }
        else if(onecheck) {
            cout << allonecount << endl;
        }
        else{
            cout << allzerocount << endl;
        }
        tc--;
    }
	return 0;
}
