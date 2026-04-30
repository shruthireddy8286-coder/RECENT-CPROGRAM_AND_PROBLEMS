#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
    {
        int n;
        printf("Enter the number of innings: ");
        scanf("%d", &n);
        char operations[n][20];
        for (int i = 0; i < n; i++) {
            scanf("%s", operations[i]);
        }
     int stack[n];
     int top = -1;
     for (int i = 0; i < n; i++) {
         if (strcmp(operations[i], "+") == 0) {
             stack[++top] = stack[top - 1] + stack[top - 2];
         }
         else if (strcmp(operations[i], "D") == 0) {
             stack[++top] = 2 * stack[top - 1];
         }
         else if (strcmp(operations[i], "C") == 0) {
             if (top >= 0) {
                 top--;
             }
         }
         else {
             stack[++top] = atoi(operations[i]);
         }
     }
     return 0;
     }