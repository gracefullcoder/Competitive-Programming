// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;
// int main() {
//     long long int tc;
//     cin >> tc;

//     while(tc >0) {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         for(long long int i = 0 ; i < n ; i++) {
//             cin >> arr[i];
//         }

//         sort(arr,arr+n);

//         // cout << "\n";
//         long long int maxim = 0;
//         long long int currmaxim = 0;
//         for(long long int i = 0 ; i < n ; i++) {
//             long long int count = 0;
//             for(long long int j = i ; j < n ; j++) {

//                 if(arr[j] % arr[i] == 0) {
//                     count++;
//                 }
//             }
//             count++;
//             currmaxim = count * arr[i];
//             if(currmaxim > maxim) {
//                 long long int temp = currmaxim;
//                 long long int currmaxim = maxim;
//                 long long int maxim = temp;
//             }
//         }
//         cout << maxim << endl;
//         tc--;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int test;

//     scanf("%d\n", &test);
//     int i = 0;

//     while (i < test)
//     {

//         string a;
//         int len;

//         cin >> len >> a;
//         int t;
//         int remainder;

//         if (len > 3)
//         {
//             t = a[len - 3] * 100 + a[len - 2] * 10 + a[len - 1];
//             remainder = t % 8;

//             if (remainder != 0)
//             {

//                 if (remainder + a[len - 1] > 9)
//                     a[len - 1] = a[len - 1] + (8 - remainder);

//                 else
//                     a[len - 1] += remainder;
//             }
//         }

//         else if (len == 3)
//         {

//             t = a[0] * 100 + a[1] * 10 + a[2];
//             remainder = t % 8;

//             if (remainder != 0)
//             {
//                 if (remainder + a[2] > 9)

//                     a[2] = a[2] + (8 - remainder);

//                 else
//                     a[2] += remainder;
//             }
//         }

//         else if (len == 2)
//         {

//             t = a[0] * 10 + a[1];
//             remainder = t % 8;

//             if (remainder != 0)
//             {

//                 if (remainder + a[1] > 9)

//                     a[1] = a[1] + (8 - remainder);

//                 else
//                     a[1] += remainder;
//             }
//         }

//         else
//         {
//             t = a[0];
//             remainder = t % 8;

//             if (remainder != 0)
//             {
//                 if (remainder + a[0] > 8)

//                     a[0] = a[0] + (8 - remainder);

//                 else

//                     a[0] = remainder + a[0];
//             }
//         }

//         cout << a << "\n";
//         i++;
//     }

//     return 0;
// }


#include <iostream>
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
        for(int i = 0 ; i < n ; i++) {
            if(s[i] == '0') {
                zero++;
            }
            else if(s[i] == '1') {
                one++;
            }
        }
        
        if(zero == n || one == n) {
            cout << 0 << endl;
        }

        else{
            if(zero == one) {
                cout << zero <<endl;
            }
            else if(zero > one){
                if(one % 2 == 0){
                    cout << one /2 << endl;
                }
                else{
                    if(zero % 2 == 0){
                        cout << zero/2 <<endl; 
                    }
                    else{
                        cout << zero/2 + 1 << endl;
                    }
                }
            }
            else if(zero < one) {
                if(one % 2 != 0){
                    cout << zero << endl;
                }
                else{
                    int select = min(zero,one/2);
                    cout << select <<endl;
                }
            }
        }
        
        tc--;
    }
	return 0;
}
