# include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a==b){
        printf("Equal");
    }
    else if(a<b){
        printf("Second",b );
    }
    else if(a>b){
        printf("First", a);
    }
    else{
        printf("0");
    }
    return 0;
}