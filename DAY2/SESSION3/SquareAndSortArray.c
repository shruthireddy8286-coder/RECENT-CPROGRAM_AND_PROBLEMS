#include<stdio.h>

int main(){
    int N,T;
    printf("Enter N and T: ");
    scanf("%d %d",&N,&T);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);

    }   
    int left = 0, right = N - 1,pos=N-1;
    int result[N];  
    while(left <= right){
        if(arr[left] > arr[right]){
            result[pos--] = arr[left];
            left++;
        } else {
            result[pos--] = arr[right];
            right--;
        }
        pos--;
    }   
    printf("Sorted squares: ");
    for(int i=0;i<N;i++){   
        printf("%d ",result[i]);
    }
    printf("\n");
    return 0;
}