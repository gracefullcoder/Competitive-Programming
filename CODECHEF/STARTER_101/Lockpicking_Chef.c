
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main(void)
{
    int test;
    scanf("%d", &test);
    while (test > 0)
    {
        int len_of_string;
        int len_of_sc;

        scanf("%d%d",&len_of_string,&len_of_sc);
        char string[len_of_string];
        scanf("%s",string);
        char sc[len_of_sc];
        scanf("%s",sc);
        // printf("%s\t%s\n",string,sc);
        int min = INT_MAX , mini = 0 , mind = 0;
        for(int i = 0 ; i <= len_of_string - len_of_sc; i++) {
            int currmin = 0;
           int k = 0;
            for(int j = i ; j < i + len_of_sc ;j++) {
                //decrement then increment
                if(string[j] > sc[k]) {
                    mind = (int)string[j] - (int)sc[k];
                    mini = 10 - (int)string[j] + (int)sc[k];
                   if(mind >= mini) {
                        currmin += mini;
                   }
                   else{
                        currmin += mind;
                   }
                    // printf("%d\n",currmin);
                }
                //increment then decrement
                if(string[j] < sc[k]){

                    mini = (int)sc[k] - (int)string[j];
                    mind = 10 + (int)string[j] - (int)sc[k];
                    
                   if(mind >= mini) {
                        currmin += mini;
                   }
                   else{
                        currmin += mind;
                   }
                //    printf("%d\n",currmin);
                }
                k++;
            }
            // printf("final - %d\n",currmin);
            if(currmin < min) {
                min = currmin;
            }
        }
        printf("%d\n",min);
        test--;
    }
    return 0;
}