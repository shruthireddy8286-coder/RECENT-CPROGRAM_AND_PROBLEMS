#include<stdio.h>
#  include<string.h>
int main()
{
    char directory[100][100];
    char search[100];
    int n;
    printf("Enter the number of entries in the phone directory: ");
    scanf("%d", &n);
    printf("Enter the names in the phone directory:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", directory[i]);
    }
    printf("Enter the name to search: ");
    scanf("%s", search);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(directory[i], search) == 0) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Name found in the phone directory.\n");
    } else {
        printf("Name not found in the phone directory.\n");
    }
    return 0;
}