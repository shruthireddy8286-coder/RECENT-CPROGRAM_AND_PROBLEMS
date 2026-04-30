#include<stdio.h>
 int main(){
    int days[] = {1, 3, 5, 7, 9};
    int n = sizeof(days)/sizeof(days[0]);
    int k = 4;
    printf("Longest window: %d\n", longestWindow(days, n, k));
    return 0;
}
int longestWindow(int days[], int n, int k){
    int left = 0, right = 0, maxLength = 0;
    while(right < n){
        if(days[right] - days[left] <= k){
            maxLength = (right - left + 1) > maxLength ? (right - left + 1) : maxLength;
            right++;
            } else {
                left++;
            }
        }
        return maxLength;
    }