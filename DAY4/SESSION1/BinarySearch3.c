#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int thirdmax(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]==arr[j+1])
            {
                for(int k=j;k<n-1;k++)
                    arr[k]=arr[k+1];
                n--;
                j--;
            }
        }
    }
    qsort(arr,n,sizeof(int),compare);
    return arr[n-3];
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int result=thirdmax(arr,n);
    printf("The third maximum element is:%d",result);
    return 0;
}
