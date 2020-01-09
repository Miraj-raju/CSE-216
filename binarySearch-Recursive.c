#include <stdio.h>
int binarySearch(int a[],int s,int e,int x){
    if(s>e)
        return -1;

    int mid = (s+e)/2;
    if(x==a[mid])
        return mid;

    if(x>a[mid]){
        s = mid+1;
    }else{
        e=mid-1;
    }
    binarySearch(a,s,e,x);
}
int main(){
    int a[100]={3,7,10,12,14,15,17,18,22,24};
    int n=10,x,mid,flag;
    int s=0,e=n-1;

    printf("Enter Searching Element : ");
    scanf("%d",&x);

    flag=binarySearch(a,s,e,x);

    if(flag != -1)
        printf("Element Found at index of %d",flag);
    else
        printf("Element Not Found ");

    return 0;
}
