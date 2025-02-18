#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(100>=n>=90){
        print("A");
    }
    else if(80>=n<90){
        print("B");
    }
    else if(70>=n<80){
        print("C");
    }
    else if(60>=n<70){
        print("D");
    }
    else{
        print("F");
    }
    return 0;
}
