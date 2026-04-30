#include<stdio.h>

int main(){
    printf("Enter data here");
    int N =242;
    int arr[]={100,50,20,10,5,2,1};
    int count=0;
    for (int i=0;i<7;i++){
        count=N/arr[i];
        N=N%arr[i];
        printf("the Note =%d and requires=%d/n",arr[i]);
    }
    }
