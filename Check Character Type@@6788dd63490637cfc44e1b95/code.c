#include <stdio.h>
int main() {
    char ch;

    if (isdigit(ch)) {
        printf("Digit", ch);
    }

    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel", ch);
    }

    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant", ch);
    } else {
        printf("0");
    }

    return 0;
}

