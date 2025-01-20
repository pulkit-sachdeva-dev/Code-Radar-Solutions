#include <stdio.h>

char word[100] = "";

int main() {
    fgets(word, 100, stdin);
    printf("You entered: %s", word);
    return 0;
}