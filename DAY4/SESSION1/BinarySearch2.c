#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int s,b;
    printf("Enter the size of the array: ");
    scanf("%d",&s);
    if(s <= 0){
        printf("Invalid size.\n");
        return 0;
    }
    int booked[s];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < s; i++){
        scanf("%d", &booked[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&b);
    int low=0,high=s-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(booked[mid]==b){
            printf("Element found at index %d\n",mid);
            return 0;
        }
        else if(booked[mid]<b){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("Element not found in the array.\n");
    return 0;

