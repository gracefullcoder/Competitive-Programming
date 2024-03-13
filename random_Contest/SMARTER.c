#include <stdio.h>
#include <math.h>

int main() {
   
    int numofTC;
    scanf("%d",&numofTC);
    int i = 0;
    while(i < numofTC) {
        int L,V1,V2;
        scanf("%d%d%d",&L,&V1,&V2);

        int T1 = ceil((double)L/V1);
        int T2 = ceil((double)L/V2);
        printf("%d\t%d\n",T1,T2);
        // int pause = -1;
        // if(T1 > T2 +)
        if(T1 <= T2) {
            printf("-1\n");
        }
        else if(T1 - T2 == 1) {
            printf("0\n");
        }
        else{
            printf("%d\n",T1 - T2  - 1);
        }

        // for(int j = 0 ; j <= T1 ; j++) {
        //     if(T1 > T2 + j) {
        //         pause = j;
        //     }
        // }
        i++;
    }
    return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int test;
//     cin >> test;
//     while (test > 0) {
//         int r, t, h;
//         int num = -1;
//         cin >> r >> t >> h;
        
//         int x = ceil(static_cast<double>(r) / h);
//         int y = ceil(static_cast<double>(r) / t); 

//         for (int i = 0; i <= r / t; i++) {
//             if (x + i  < y) {
//                 num = i;
//             }
//         }
//         if(num == -1)
//             cout << -1 << endl;
//         else
//             cout << num << endl; 
//         test--;
//     }
//     return 0;
// }
