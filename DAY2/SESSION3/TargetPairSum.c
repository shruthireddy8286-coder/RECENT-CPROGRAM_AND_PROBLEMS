#include<stdio.h>
 
int main(){
    int N,B;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    printf("Enter the target sum: ");
    scanf("%d", &B);
    int arr[N];
    printf("Enter %d numbers: ", N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);

    }
    int found = 0;
    int left = 0, right = N - 1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == B){
            printf("Pair found: (%d, %d)\n", arr[left], arr[right]);
            found = 1;
            left++;
            right--;
        } else if(sum < B){
            left++;
        } else {
            right--;
        }
    }
    if(!found){
        printf("No pair found with the target sum.\n");
    }
    return 0;
}   
