#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int oc = 0, ec = 0, n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << " " << 1 << endl;
        }
        if (n == 2)
        {
            cout << 0 << " " << 2 << endl;
        }

        if (n > 2)
        {
            int arr[100];
            unsigned long long end = 5;
            unsigned long long finalend = 5;
            ec = 0;
            oc = 2;
            n = n - 2;
            int j;
            while (n > 0)
            {
                bool flag = true;
                for (unsigned long long i = 2; i <= sqrt(finalend); i++)
                {
                    if (finalend % i == 0)
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag)
                {   end = finalend;
                    j = 0;
                    while (end > 0)
                    {
                        arr[j] = end % 10;
                        end /= 10;
                        j++;
                    }

                    for (int k = 0; k < j / 2; k++)
                    {
                        if (arr[k] != arr[n - 1 - k])
                        {
                            flag = false;
                            break;
                        }
                    }

                    if(flag)
                    {
                        if (j % 2 == 0)
                        {
                            ec++;
                            cout << finalend << " ";
                            n--;
                        }
                        else
                        {
                            oc++;
                            cout << finalend << " ";
                            n--;
                        }
                    }
                }
                finalend++;
            }
        
            cout << endl << ec <<" " << oc << endl;
        }
    }
    return 0;
}

// // #include <iostream>
// // #include <vector>
// // #include <cmath>
// // using namespace std;

// // bool isPrime(int num)
// // {
// //     if (num <= 1)
// //         return false;
// //     if (num <= 3)
// //         return true;
// //     if (num % 2 == 0 || num % 3 == 0)
// //         return false;

// //     for (int i = 5; i <= sqrt(num); i++)
// //     {
// //         if (num % i == 0)
// //             return false;
// //     }

// //     return true;
// // }

// // bool checkpal(int num)
// // {
// //     int org = num;
// //     int rev = 0;

// //     while (num > 0)
// //     {
// //         int digit = num % 10;
// //         rev = rev * 10 + digit;
// //         num /= 10;
// //     }

// //     return org == rev;
// // }

// // int main()
// // {
// //     int tc;
// //     cin >> tc;
// //     while (tc--)
// //     {
// //         int N;
// //         cin >> N;

// //         int ec = 0, oc = 0;
// //         int num = 2;

// //         while (N > 0)
// //         {
// //             if (isPrime(num) && checkpal(num))
// //             {
// //                 int digits = log10(num) + 1;

// //                 if (digits % 2 == 0)
// //                 {
// //                     ec++;
// //                 }
// //                 else
// //                 {
// //                     oc++;
// //                 }

// //                 N--;
// //             }
// //             num++;
// //         }

// //         cout << ec << " " << oc << endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// bool checkpal(int n) {
//     int r,s=0,temp;    
//     temp=n;    
//     while(n>0) {    
//         r=n%10;    
//         s=(s*10)+r;    
//         n=n/10;    
//     }    
//     if(temp==s)    
//         return true;    
//     else    
//         return false;    
// }

// vector<int> SieveOfEratosthenes(int n) {
//     vector<bool> prime(n+1, true);
//     prime[0] = prime[1] = false;
//     for (int p=2; p*p<=n; p++) {
//         if (prime[p] == true) {
//             for (int i=p*p; i<=n; i += p)
//                 prime[i] = false;
//         }
//     }
//     vector<int> pri;
//     for (int p=2; p<=n; p++)
//         if (prime[p])
//             pri.push_back(p);
//     return pri;
// }

// int main() {
//     int T;
//     cin >> T;
//     while(T--) {
//         int N;
//         cin >> N;
//         vector<int> pri = SieveOfEratosthenes(10000);
//         int ovc = 0, odc = 0;
//         int count = 0;
//         for(auto prime : pri) {
//             if(checkpal(prime)) {
//                 count++;
//                 if(to_string(prime).size() % 2 == 0)
//                     ovc++;
//                 else
//                     odc++;
//             }
//             if(count == N)
//                 break;
//         }
//         cout << ovc << " " << odc << endl;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {

//   int n, i, flag = 0;
//   while(1){
//   printf("Enter a positive integer: ");
//   scanf("%d",&n);

//   // 0 and 1 are not prime numbers
//   // change flag to 1 for non-prime number
//   if (n == 0 || n == 1)
//     flag = 1;

//   for (i = 2; i <= n / 2; ++i) {

//     // if n is divisible by i, then n is not prime
//     // change flag to 1 for non-prime number
//     if (n % i == 0) {
//         printf("%d \n",i);
//       flag = 1;
//       break;
//     }
//   }

//   // flag is 0 for prime numbers
//   if (flag == 0)
//     printf("%d is a prime number.", n);
//   else
//     printf("%d is not a prime number.", n);
    
//     printf("\n");
// }
//   return 0;
// }