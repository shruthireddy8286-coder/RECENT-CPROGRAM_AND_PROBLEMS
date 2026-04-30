#include<stdio.h>
int main(){
    int taxableIncome;
    float tax;      
    printf("Enter your taxable income: ");
    scanf("%d", &taxableIncome);    
    if(taxableIncome <= 250000) {
        tax = 0;
    } else if(taxableIncome <= 500000) {
        tax = (taxableIncome - 250000) * 0.05;
    } else if(taxableIncome <= 750000) {
        tax = (taxableIncome - 500000) * 0.10 + 12500;
    } else if(taxableIncome <= 1000000) {
        tax = (taxableIncome - 750000) * 0.15 + 37500;
    } else if(taxableIncome <= 1250000) {
        tax = (taxableIncome - 1000000) * 0.20 + 75000;
    } else if(taxableIncome <= 1500000) {
        tax = (taxableIncome - 1250000) * 0.25 + 125000;
    } else {
        tax = (taxableIncome - 1500000) * 0.30 + 187500;
    }   

    printf("Income Tax: %.2f\n", tax);
    return 0;
}