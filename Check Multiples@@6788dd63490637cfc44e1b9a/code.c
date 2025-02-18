#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(b != 0) {  // Check to avoid division by zero
        if(a % b == 0) {
            printf("Yes", a, b);
        } else {
            printf("No", a, b);
        }
    } else {
        printf("0");
    }

    return 0;
}
