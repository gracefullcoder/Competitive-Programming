// #include <iostream>
// using namespace std;

// int main()
// {
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int count = 0;
//         for(int i = k - 1 ; i < n ; i = i +k) {
//             for(int j = 0 ; j < k - 1 ; j++) {
//                 if ((arr[i] * arr[j]) % k == 0)
//                 {
//                     count++;
//                 }
            
//             }
//         }
//         cout  << count << endl;
//         int count2 = 0;
//         for (int i = k - 1; i < n - 1; i = i + k)
//         {
//             for (int j = i + 1 ; j < n; j++)
//             {
//                 if ((arr[i] * arr[j]) % k == 0)
//                 {
//                     count2++;
                    
//                 }
//             }
//             cout << count2 << "\t";
//         }
//     cout << count2 << endl;
// }
// return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long count = 0;
        for(int i = 1 ; i < n ; i++) {
            for(int j = i+1; j < n+1; j++) {
                if (((arr[i-1] * arr[j-1]) % k  == 0) && ((i*j)%k==0))
                {
                    count++;
                }
            
            }
        }

        cout  << count << endl;}
       
return 0;
}

