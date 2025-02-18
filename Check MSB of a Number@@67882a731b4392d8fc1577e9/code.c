#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int MSB=1<<31;
    if(a&MSB&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
  
    return 0;
}