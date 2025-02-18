#include <stdio.h>
int main() {
    int num;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Print the binary representation
    printf("%d", num);
    printBinary(num);

    return 0;
}
