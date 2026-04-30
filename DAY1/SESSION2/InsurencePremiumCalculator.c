#include<stdio.h>
int main(){
    int gender, age;
    float premium;
    printf("Enter your gender (1 for male, 2 for female): ");
    scanf("%d", &gender);   
    printf("Enter your age: ");
    scanf("%d", &age);
    if(gender == 1) {
        if(age < 25) {
            premium = 5000;
        } else if(age <= 40) {
            premium = 3000;
        } else {
            premium = 2000;
        }
    } else {
        if(age < 25) {
            premium = 4000;
        } else if(age <= 40) {
            premium = 2500;
        } else {
            premium = 1500;
        }
    }
    printf("Your insurance premium is: %.2f\n", premium);
    return 0;
}