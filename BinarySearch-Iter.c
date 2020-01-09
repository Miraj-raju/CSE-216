#include<stdio.h>
int main(){
    int a[]={3,7,10,12,14,15,17,18,22,24,25};
    int s=0,e=9,x,mid,flag=0;
    printf("Enter Searching Element : ");
    scanf("%d",&x);
    while(s<e){
        mid=(s+e)/2;
        if(a[mid]<x){
            s=mid+1;
        }else if(a[mid]>x){
            e=mid;
        }else{
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Element Found ");
    else
        printf("Element Not Found ");
    return 0;
}
