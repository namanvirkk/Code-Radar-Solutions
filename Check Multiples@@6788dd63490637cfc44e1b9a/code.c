#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
        if(a % b == 0) {
            printf("Yes", a, b);
        } else {
            printf("No", a, b);
        }

    return 0;
}
