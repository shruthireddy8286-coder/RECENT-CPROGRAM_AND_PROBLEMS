#include<stdio.h>
#include<stdbool.h>

bool uniqueOccurrences(int arr[], int n) {
    // Implementation for checking unique occurrences
    return false; // Placeholder return
}

    int main(){
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d numbers: ", N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    if(uniqueOccurrences(arr, N)){
        printf("All occurrences are unique.\n");
    } else {
        printf("There are duplicate occurrences.\n");
    }
    return 0;
}