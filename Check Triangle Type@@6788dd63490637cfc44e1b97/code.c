#include <stdio.h>
int main(){
    int a,b,c;
    scan("%d %d", &a, &b, &c);
    if(a=b=c){
        printf("Equilateral");
    }
    else if(a=b){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}