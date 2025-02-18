#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>c && a>b){
        printf("a");
    }
    else if(b>c && b>a){
        printf("b");
    }
    else{
        printf("c");
    }
    return 0;
}