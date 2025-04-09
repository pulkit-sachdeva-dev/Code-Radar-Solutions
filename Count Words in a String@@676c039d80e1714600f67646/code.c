#include <stdio.h>

int main() {
    char str[1000];
    int i, words = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\0') break;
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            words++;
        }

    }

    printf("%d", words);
    return 0;
}
