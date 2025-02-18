#include <stdio.h>

void printBinary(int num) {
    // Determine the number of bits in an integer (usually 32 or 64, depending on the system)
    int size = sizeof(num) * 8; // Number of bits in the integer

    // Traverse through each bit from most significant to least significant
    for (int i = size - 1; i >= 0; i--) {
        // Use bitwise AND with 1 to extract the current bit (either 0 or 1)
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

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
