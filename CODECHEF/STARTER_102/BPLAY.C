// #include <iostream>
// #include <vector>
#include <stdio.h>
// using namespace std;

// xor
int isxor(int a, int b)
{
    if ((a + b) % 2 == 1) return 1;
    return 0;
}

// and
int isand(int a, int b)
{
    if (a == 1 && b == 1) return 1;
    return 0;
}

// or
int isor(int a, int b)
{
    if (a == 0 && b == 0) return 0;
    return 1;
}

int main()
{
    int nTc;
    // printf("%d",isor(1,0));
    scanf("%d",&nTc);

    while (nTc > 0)
    {
        int N;
        scanf("%d",&N);
        char S[N+1];
        for(int j = 0 ; j < N ; j++) {
            scanf("%d",&S[j]);
        }
        S[N] = '\0';
        int ways = 1;
        int count;
        int check = 1;
        int j;
        for (int i = 0; i < N - 1; i += 2)
        {
            j = i;
            int a = S[j];
            j++;
            int b = S[j];
            count = 0;
            j++;
            //and
            if (S[j] == isand(a,b))
            {
                count++;
            }

            // or
            if (S[j] == isor(a,b))
            {
                count++;
            }

            // xor
            if (S[j] == isxor(a,b))
            {
                count++;
            }

            printf("%d count\n",count);

            if (count > 0)
            {
                ways *= count;
                printf("%d ways\n",ways);
            }
            
            else
            {
                check = 0;
                printf("0\n");
                break;
            }
        }
        if(check) printf("%d\n",ways);

        nTc--;
    }
    return 0;
}
