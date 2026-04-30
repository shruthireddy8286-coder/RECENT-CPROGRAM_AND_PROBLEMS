#include<stdio.h>

int main(){
    // Example usage
    int bunches[] = {3, 6, 7, 11};
    int n = sizeof(bunches) / sizeof(bunches[0]);
    int h = 8;
    printf("Minimum eating speed: %d\n", minEatingValue(bunches, n, h));
    return 0;
}

int minEatingValue(int bunches[], int n, int h){
    int max = 0;
    for(int i=0; i<n; i++){
        if(bunches[i] > max){
            max = bunches[i];
            }
        }
        int left = 1, right = max;
        while(left < right){
            int mid = left + (right - left) / 2;
            long long hours = 0;
            for(int i=0; i<n; i++){
                hours += (bunches[i] + mid - 1) / mid; // ceil(bunches  [i] / mid)
            }
            if(hours <= h){
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
        int answer=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            long long hours=0;
            for(int i=0;i<n;i++){
                hours+=(bunches[i]+mid-1)/mid;
            }
            if(hours<=h){
                answer=mid;
                right=mid-1;
            } else {
                left=mid+1;
            }
        }
        return answer;
    }
