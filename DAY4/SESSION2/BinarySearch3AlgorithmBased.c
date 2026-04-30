#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int thirdmax(int nums[],int n)
{
    qsort(nums,n,sizeof(int),compare);
    int unique[n];
    int k=0;
    unique[k++]=nums[0];
    for(int i=1;i<n;i++)
    {
        if(nums[i]!=nums[i+1])
            unique[k++]=nums[i];
    }
    qsort(unique,k,sizeof(int),compare);
    return unique[k-3];
    if(k<3)
        return unique[k-1];
        int low=0,high=k-1,mid;
    while(low<=high)    {
        mid=(low+high)/2;
        if(unique[mid]==unique[k-3])
            return unique[mid];
        else if(unique[mid]<unique[k-3])
            low=mid+1;
        else
            high=mid-1;
    }
}
int main(){
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