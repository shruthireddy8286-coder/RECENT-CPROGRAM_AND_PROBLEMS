#include<stdio.h>
int main(){
        int units;
        float bill;
        
        printf("Enter the number of units consumed: ");
        scanf("%d", &units);
    
        if(units <= 100) {
            bill = units * 0.5;
        } else if(units <= 200) {
            bill = 100 * 0.5 + (units - 100) * 0.75;
        } else if(units <= 300) {
            bill = 100 * 0.5 + 100 * 0.75 + (units - 200) * 1.20;
        } else {
            bill = 100 * 0.5 + 100 * 0.75 + 100 * 1.20 + (units - 300) * 1.50;
        }
    
        printf("Electricity Bill: %.2f\n", bill);   
    return 0;   
}
