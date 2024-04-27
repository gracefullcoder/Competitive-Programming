// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int arr[26] = {0};
//         int arrfreqahead[26] = {0};
//         for (char c : s)
//         {
//             // cout << c-97 << " " ;
//             arr[c - 97]++;
//         }
//         int count = 0;
//         unsigned long long int sum = 0;
//         unsigned long long int mul = 1;

//         for (int i = 0; i < 26; i++)
//         {
//             if (arr[i] != 0)
//             {
//                 for (int j = i + 1; j < 26; j++)
//                 {
//                     if (arr[j] != 0)
//                         arrfreqahead[i]++;
//                 }
//             }
//         }

//         // for(int i = 0 ; i < 26 ; i++) {
//         //     cout << arrfreqahead[i] << " " ;
//         // }
//         // cout <<endl;

//         // for(int i = 0 ; i < 26 ; i++) {
//         //     cout << arr[i] << " " ;
//         // }
//         // cout <<endl;
//         for (int i = 0; i < 26; i++)
//         {
//             cout << 1;
//             // sum += arr[i];
//             if (arr[i] != 0)
//             {
//                 if (arrfreqahead[i] != 0)
//                 {
//                     // mul *= arrfreqahead[i];
//                     mul = 1;
//                     for (int i = arrfreqahead[i]; i > 0; i--)
//                     {
//                         mul = mul * i;
//                         sum += mul;
//                     }
//                     sum *= arr[i];
//                     // count++;
//                 }
//                 else
//                 {
//                     if (sum == 0)
//                     {
//                         sum = 1;
//                     }
//                     sum *= arr[i];
//                 }
//             }
//             cout << sum << "  " << mul << endl;
//             // if (count < 2)
//             // {
//             //     mul = 0;
//             // }
//         }
//         cout << sum % 1000000009 << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

long long findFact(int num)
{
    int i = 1, fact = 1;
    while (i <= num)
    {
        fact = i * fact;
        i++;
    }
    return fact;
}
long long int findNPR(int n, int r)
{
    long long int numerator, denominator;
    numerator = findFact(n);
    denominator = findFact(n - r);
    return (numerator / denominator);
}
long long int findNCR(int n, int r)
{
    long long int npr, ncr;
    npr = findNPR(n, r);
    ncr = npr / findFact(r);
    return ncr;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[26] = {0};
        int arrfreqahead[26] = {0};
        for (char c : s)
        {
            arr[c - 97]++;
        }
        unsigned long long int sum = 0;
        unsigned long long int mul = 1;
        unsigned long long int finalsum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {
                for (int j = i + 1; j < 26; j++)
                {
                    if (arr[j] != 0)
                        arrfreqahead[i]++;
                }
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {
                if (arrfreqahead[i] != 0)
                {
                    sum = 0;
                    for (int j = arrfreqahead[i]; j > 0; j--)
                    {
                        mul = findNCR(arrfreqahead[i],j);
                        sum += mul;
                    }
                    sum *= arr[i];
                    finalsum += sum;
                }
                else
                {
                    finalsum *= arr[i];
                }
            }
        }
        cout << (finalsum + n) % 1000000009 << endl;
    }
    return 0;
}
