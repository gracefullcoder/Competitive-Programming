#include <stdio.h>
 
int main() {
    int tc; 
    scanf("%d", &tc);
 
    while (tc--) {
        int n;
        scanf("%d", &n);
 
        if (n % 3 != 0) {
            printf("ARES\n");
        } else {
            printf("KRATOS\n");
        }
    }
 
    return 0;
}