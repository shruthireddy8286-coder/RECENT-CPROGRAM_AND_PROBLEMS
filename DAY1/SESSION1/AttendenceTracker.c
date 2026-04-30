#include<stdio.h>

int main(){
     int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[50];
    int attended, total;
    float percentage;

    for(int i = 0; i < n; i++) {
        printf("\nEnter name, classes attended, total classes: ");
        scanf("%s %d %d", name, &attended, &total);

        percentage = ((float)attended / total) * 100;

        if(percentage >= 75)
            printf("%s: ELIGIBLE\n", name);
        else
            printf("%s: NOT-ELIGIBLE\n", name);
    }

    return 0;
}