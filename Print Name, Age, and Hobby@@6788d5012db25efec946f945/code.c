#include <stdio.h>

int main() {
    char Name[50];
    scanf("%49s", &Name);

    char Age[10];
    scanf("%9s", &Age);

    char Hobby[100];
    scanf("%99s", &Hobby);

    printf("Name: %s \n", Name);
    printf("Age: %s \n", Age);
    printf("Hobby: %s \n", Hobby);
    return 0;


}