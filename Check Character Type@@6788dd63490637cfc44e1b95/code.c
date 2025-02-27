#include <stdio.h>
int main() {
    char ch;

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit");
    }
    // Check if the character is a vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    }
    // Check if the character is a consonant (only alphabetic characters)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is a consonant.\n");
    } else {
        printf("The character is neither a vowel, consonant, nor a digit.\n");
    }

    return 0;
}

