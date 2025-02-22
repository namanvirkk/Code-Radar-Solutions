#include <stdio.h>
int main(){
    int age,Citizen1;
    scanf("%d %d" , &a, &Citizen1);
    if(a>=18){
        printf("Eligible");
    }
    else if (Citizen1>=18){
        printf("Not Eligible");
    }
    else{
        printf("0");
    }
    return 0;
}