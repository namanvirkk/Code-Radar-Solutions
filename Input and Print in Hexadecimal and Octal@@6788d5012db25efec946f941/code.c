#include <stdio.h>

int main() {
    int Hexadecimal;

    // Read hexadecimal input using %x
    printf("Hexadecimal: ");
    scanf("%x", &Hexadecimal);

    // Print the value in octal format using %o
    printf("Octal: %o\n", Hexadecimal);

    return 0;
}
