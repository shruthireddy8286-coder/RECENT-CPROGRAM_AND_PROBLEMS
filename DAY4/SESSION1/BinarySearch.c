#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char name[100];
    char number[20];
} phonebook;
int phonebookcmp(const void *a, const void *b) {
    return strcmp(((phonebook*)a)->name, ((phonebook*)b)->name);
}

int main()
{
    int n,q;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    phonebook p[n];
    printf("Enter the names and phone numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s %s", p[i].name, p[i].number);
    }
    printf("Enter the number of queries: ");
    scanf("%d", &q);
    while(q--){
        char search[100];
        printf("Enter the name to search: ");
        scanf("%s", search);
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(p[i].name, search) == 0) {
                printf("Phone number: %s\n", p[i].number);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Name not found in the phone directory.\n");
        }
    }
}