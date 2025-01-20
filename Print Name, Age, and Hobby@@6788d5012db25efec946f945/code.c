#include <stdio.h>

char name[11];
int age;
char hobby[11];
int main() {
    scanf("%s\n%d\n%s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}