#include<stdio.h>

int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d numbers: ", N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0,maxCount = 0;
    for(int i=0; i<N-1; i++){   
        if(arr[i] == arr[i+1]){
            count++;
        }
        else{
            if(count > maxCount){
                maxCount = count;
            }
            count = 0;
        }
    }
    if(count > maxCount){
        maxCount = count;
    }
    printf("Maximum consecutive occurrences: %d\n", maxCount);
    return 0;
    
}