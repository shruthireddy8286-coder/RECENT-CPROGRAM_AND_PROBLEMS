#include<stdio.h>
#include<stdlib.h>
int climbingstairs(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return climbingstairs(n-1)+climbingstairs(n-2);
}

int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    int result=climbingstairs(n);
    printf("The number of ways to climb %d stairs is: %d",n,result);
    return 0;
}
