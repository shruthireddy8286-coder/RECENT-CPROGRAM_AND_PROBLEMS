#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
int *finalprices(int *price, int priceSize, int *returnSize) {
    int *result = (int *)malloc(priceSize * sizeof(int));
    int stack[500];
    int top = -1;

    for (int i = 0; i < priceSize; i++) {
        while (top != -1 && price[i] < price[stack[top]]) {
            int idx = stack[top--];
            int discount = 0;
            if (price[idx] >= 1000) {
                discount = price[idx] * 0.1;
            }
            else if (price[idx] >= 500) {
                discount = price[idx] * 0.05;
            }
            result[idx] = price[idx] - discount;
        }
        stack[++top] = i;
    }

    while (top != -1 ) {
        int idx = stack[top--];
        int discount = 0;
        if (price[idx] >= 1000) {
            discount = price[idx] * 0.1;
        }
        else if (price[idx] >= 500) {
            discount = price[idx] * 0.05;
        }
        result[idx] = price[idx] - discount;
    }

    *returnSize = priceSize;
    return result;
}
int main()
{
    int n;
    printf("Enter the price of the item: ");
    scanf("%d", &n);
    int price[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }
    int returnsize;
     for (int i = 0; i < n; i++) {
         printf("%d ", price[i]);
     }

    int discount = 0;
    if (n >= 1000) {
        discount = n * 0.1;
    }
    else if (n >= 500) {
        discount = n * 0.05;
    }
    int finalPrice = n - discount;
    printf("The final price after discount is: %d\n", finalPrice);
    return 0;
}