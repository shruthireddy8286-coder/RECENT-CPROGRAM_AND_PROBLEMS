#include<stdio.h>
int main(){
    char name[50];
    int basicSalary, hra, da, grossSalary;
    
    printf("Enter employee name: ");
    scanf("%s", name);
    
    printf("Enter basic salary: ");
    scanf("%d", &basicSalary);
    
    printf("Enter HRA: ");
    scanf("%d", &hra);
    
    printf("Enter DA: ");
    scanf("%d", &da);
    
    grossSalary = basicSalary + hra + da;
    
    printf("\nSalary Slip for %s\n", name);
    printf("Basic Salary: %d\n", basicSalary);
    printf("HRA: %d\n", hra);
    printf("DA: %d\n", da);
    printf("Gross Salary: %d\n", grossSalary);
    
    return 0;
}