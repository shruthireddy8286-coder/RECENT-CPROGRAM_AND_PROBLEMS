#include <stdio.h>
#include <string.h>

char stack[1000];
int top = -1;

int isValidParentheses(char *s) {
    for(int i = 0; s[i] != '\0'; i++) {
     char c = s[i];
     if(c == '(' || c == '{' || c == '[') {
         stack[++top] = c;
     }
     else if(c == ')' || c == '}' || c == ']') {
         if(top == -1) {
             return 0;
         }
         char topChar = stack[top--];
         if((c == ')' && topChar != '(') ||
            (c == '}' && topChar != '{') ||
            (c == ']' && topChar != '[')) {
             return 0;
             top--;
         }
     }
    }
    return top == -1;
}

int main() {
    char s[100];
    printf("Enter a string of parentheses: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // Remove newline character 
    if(isValidParentheses(s)) {
        printf("The parentheses are valid.\n");
    } else {
        printf("The parentheses are not valid.\n");
    }
    return 0;
}

