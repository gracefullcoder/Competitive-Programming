// #include <iostream>
// #include <vector>
// using namespace std;

// // xor
// int isxor(int a, int b)
// {
//     if ((a + b) % 2 == 1) return 1;
//     return 0;
// }

// // and
// int isand(int a, int b)
// {
//     if (a == 1 && b == 1) return 1;
//     return 0;
// }

// // or
// int isor(int a, int b)
// {
//     if (a != 0 && b != 0) return 1;
//     return 0;
// }

// int main()
// {
//     int nTc;
//     cin >> nTc;

//     while (nTc > 0)
//     {
//         int N;
//         cin >> N;
//         vector <int> S;
//         for(int j = 0 ; j < N ; j++) {
//             cin >> S[j];
//         }
//         int ways = 1;
//         int count;
//         int check = 1;
//         for (int i = 0; i < N - 1; i += 2)
//         {
//             int a = S[i];
//             int b = S[i + 1];
//             count = 0;

//             //and
//             if (S[i+2] == isand(a,b))
//             {
//                 count++;
//             }

//             // or
//             if (S[i+2] == isor(a,b))
//             {
//                 count++;
//             }

//             // xor
//             if (S[i+2] == isxor(a,b))
//             {
//                 count++;
//             }

//             if (count > 0)
//             {
//                 ways *= count;
//             }

//             else
//             {
//                 check = 0;
//                 cout << 0 << endl;
//                 break;
//             }
//         }
//         if(check) cout << ways << endl;

//         nTc--;
//     }
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// // xor
// int isxor(int a, int b)
// {
//     if ((a + b) % 2 == 1) return 1;
//     return 0;
// }

// // and
// int isand(int a, int b)
// {
//     if (a == 1 && b == 1) return 1;
//     return 0;
// }

// // or
// int isor(int a, int b)
// {
//     if (a == 0 && b == 0) return 0;
//     return 1;
// }

// int main()
// {
//     int nTc;
//     cin >> nTc;

//     while (nTc > 0)
//     {
//         int N;
//         cin >> N;
//         // vector <char> S;
//         string S;
//         cin >> S;
//         // int S[N];
//         // for(int j = 0 ; j < N ; j++) {
//         //     S[j] = str[j];
//         // }
//         // for(int j = 0 ; j < N ; j++) {
//         //     cout << S[j] << "\t";
//         // }
//         unsigned long long ways = 1;
//         int count;
//         int check = 1;
//         int j;
//         for (int i = 0; i < N - 2; i += 2)
//         {   
        
//             int a = S[i] - 48;
        
//             int b = S[i+1] - 48;
//             count = 0;
           

//             //and
//             if (S[i+2] - 48 == isand(a,b))
//             {
//                 count++;
//             }

//             // or
//             if (S[i+2]  - 48== isor(a,b))
//             {
//                 count++;
//             }

//             // xor1
//             if (S[i+2]  - 48== isxor(a,b))
//             {
//                 count++;
//             }

//             if (count > 0)
//             {
//                 ways *= count % 1000000007;
//             }

//             else
//             {
//                 check = 0;
//                 cout << "0" << endl;
//                 break;
//             }
//         }
//         if(check) cout << ways % 1000000007 << endl;

//         nTc--;
//     }
//     return 0;
// }

