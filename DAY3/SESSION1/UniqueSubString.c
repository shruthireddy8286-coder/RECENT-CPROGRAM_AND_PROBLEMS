#include<stdio.h>
#include<string.h>
int findUniqueSubstringofsize3(char *str){
    int n=strlen(str);
    if(n<3){
        return 0;
    }
    for(int i=0;i<=n-3;i++){
        char a=str[i];
        char b=str[i+1];
        char c=str[i+2];
        if(a!=b && b!=c && a!=c){
            return 1;
        }
    }
    return 0;

}