#include<stdio.h>
#include<string.h>  
int main(){
    char type[20];
    int n, a, b;
    printf("Enter the type of series (fibonacci, even, odd, arithmetic, geometric): ");
    scanf("%s", type);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(strcmp(type, "fibonacci") == 0) {
        int a = 0, b = 1, next;
        printf("Fibonacci Series: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
    } else if(strcmp(type, "even") == 0) {
        printf("Even Series: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", 2*i);
        }
    } else if(strcmp(type, "odd") == 0) {
        printf("Odd Series: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", 2*i + 1);
        }
    } else if(strcmp(type, "arithmetic") == 0) {
        printf("Enter the first term and common difference: ");
        scanf("%d %d", &a, &b);
        printf("Arithmetic Series: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", a);
            a = a + b;
        }
    } else if(strcmp(type, "geometric") == 0) {
        printf("Enter the first term and common ratio: ");
        scanf("%d %d", &a, &b);
        printf("Geometric Series: ");
        int term = a;
        for(int i = 0; i < n; i++) {
            printf("%d ", term);
            term *= b;
        }
    } else {
        printf("Invalid series type!");
    }
    return 0;
}

