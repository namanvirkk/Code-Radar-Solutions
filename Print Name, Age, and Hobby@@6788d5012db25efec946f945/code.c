#include <stdio.h>

int main() {
    char Name[50];
    scanf("%49s", &Name);

    char Age[10];
    scanf("%9s", &Age);

    char Hobby[50];
    scanf("%Hobby", &Hobby);

    printf("Name: %s \n", Name);
    printf("Age: %s \n", Age);
    printf("Hobby: %s \n", Hobby);
    return 0;


}