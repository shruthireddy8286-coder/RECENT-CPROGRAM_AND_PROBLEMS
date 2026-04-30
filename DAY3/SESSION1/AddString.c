#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);


    char result[100];
    int j=strlen(str1)-1;
    int i=strlen(str2)-1;
    int k=0,carry=0;
    while(i>=0||j>=0||carry>0){
        int d1=(j>=0)?str1[j]-'0':0;
        int d2=(i>=0)?str2[i]-'0':0;
        int sum=d1+d2+carry;
        result[k++]=(sum%10)+'0';   
        carry=sum/10;
        i--;
        j--;
        result[k]='\0';

        for(int p=k-1;p>=0;p--){
            printf("%c",result[p]);
        }
        printf("\n");

    }