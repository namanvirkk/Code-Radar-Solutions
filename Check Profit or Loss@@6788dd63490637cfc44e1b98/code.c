#include <stdio.h>
int main(){
    int profit,loss;
    scanf("%d %d", &profit, &loss);
    if(profit>loss){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}