#include <stdio.h>
int main(){
    char x;
    scanf("%c", &x);
    if(x>='A' && x<='Z'){
        prinf("Uppercase");
    }
    else if(x>='a' && x<='z'){
        printf("Lowercase")
    }
    else{
        printf("0")
    }
    return 0;
}