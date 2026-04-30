#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        for(j = 0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}