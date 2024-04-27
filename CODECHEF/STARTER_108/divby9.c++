// #include <iostream>
// #include <cmath>
// using namespace std;

// unsigned long long int factorial(unsigned int n)
// {
//     unsigned long long int res = 1, i;
//     for (i = 2; i <= n; i++)
//         res *= i;
//     return res;
// }

// int main() {
// 	// your code goes here
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 	    int n;
// 	    cin >> n;
// 	    char arr[n];
// 	    unsigned long long int sum = 0;
// 	    unsigned long long int count = 0;
// 	    for(int i = 0 ; i < n ; i++){
// 	        cin >> arr[i];
// 	        if(arr[i] != '?'){
// 	            sum += (int)arr[i];
// 	        } else{
// 	            count++;
// 	        }
// 	    }
// 	    if(sum % 9 == 0){
//             int total = count + 8;
// 	        cout << factorial(total)/(factorial(9)*factorial(count))*2 - factorial(8)/(factorial(9)*factorial(count))*2 << endl;
// 	    }else{

//         }
// 	}
// 	return 0;
// }

// // def solve():
// //     mod = 10**9+7
// //     n = int(input().strip())
// //     s = input().strip()
// //     dp = [[0]*82 for _ in range(n+1)]
// //     dp[0][0] = 1
// //     for i in range(n):
// //         for j in range(81):
// //             if s[i] == '?':
// //                 for k in range(10):
// //                     dp[i+1][(j+k)%9] += dp[i][j]
// //                     dp[i+1][(j+k)%9] %= mod
// //             else:
// //                 k = int(s[i])
// //                 dp[i+1][(j+k)%9] += dp[i][j]
// //                 dp[i+1][(j+k)%9] %= mod
// //     print(dp[n][0])

// // t = int(input().strip())
// // for _ in range(t):
// //     solve()

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s;
// 	    int sum=0,q=0;
// 	    for(int i=0;i<n;i++){
// 	        if(s[i]=='?') q++;
// 	        else{
// 	            sum+=(s[i]-'0');
// 	        }
// 	    }
// 	    if(s[0]=='?'){
// 	        cout<<'1';
// 	        for(int i=1;i<q;i++) cout<<'0';
// 	    }
// 	    else if(sum%9!=0){
// 	        for(int i=0;i<q;i++) cout<<'1';
// 	    }
// 	    else{
// 	        for(int i=0;i<q-1;i++) cout<<'1';
// 	        cout<<'2';
// 	    }
// 	    cout<<endl;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		string s;
		cin >> n;
		cin >> s;
		char zi = s[0];
		bool flag = true;
		if (n == '1')
		{
			cout << "YES" << endl;
		}
		else
		{
			for (int i = 0; i < n - 1; i + 2)
			{
				if (s[i] == s[i + 1])
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
