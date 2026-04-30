#include<stdio.h>

int main(){
    int N, Q;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d numbers: ", N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of queries: ");
    scanf("%d", &Q);
    while(Q--){
        int L, R;
        printf("Enter the range (L R): ");
        scanf("%d %d", &L, &R);
        int sum = 0;
        for(int i=L; i<=R; i++){
            sum += arr[i];
        }
        printf("Sum of the range [%d, %d]: %d\n", L, R, sum);
    }
    return 0;
}