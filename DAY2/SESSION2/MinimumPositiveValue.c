#include<stdio.h>

int main(){
    int N;
    printf("Enter the number of elements: ");   
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d numbers: ", N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }   
    int minPositive = -1;
    for(int i=0; i<N; i++){
        if(arr[i] > 0){
            if(minPositive == -1 || arr[i] < minPositive){
                minPositive = arr[i];
            }