#include <stdio.h>
int main(){
    int Citizen1;
    scanf("%d" , &Citizen1);
    if(Citizen1>=18 && Citizen1>=1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}