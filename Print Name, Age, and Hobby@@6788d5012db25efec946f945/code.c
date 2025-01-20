#include <stdio.h>

char name;
int age;
char hobby;
int main() {
    scanf("%s\n%d\n%s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}