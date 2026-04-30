#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int code[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &code[i]);
    
    int decrypted[n];
    for(int i = 0; i < n; i++) {
        if(k > 0) {
            decrypted[i] = 0;
            for(int j = 1; j <= k; j++)
                decrypted[i] += code[(i + j) % n];

        } else if(k < 0) {
            decrypted[i] = 0;
            for(int j = 1; j <= -k; j++)
                decrypted[i] += code[(i - j + n) % n];
        } else {
            decrypted[i] = 0;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", decrypted[i]);

        int PrefixSum[n];
        PrefixSum[0]=code[0];
        for(int i=1;i<n;i++){
            PrefixSum[i]=PrefixSum[i-1]+code[i];
        }

         for(int i = 0; i < n; i++) {
          int left=i+n-k;
          int right=i+n-1;
          if(left==0){
              decrypted[i]=PrefixSum[right];
          }
          else{
              decrypted[i]=PrefixSum[right]-PrefixSum[left-1];
          }
          
        }

    
    return 0;
}
