#include<stdio.h>
int main(){
    int a[]={9,4,11,7,17,13,33,45,3,27};
    int i,j,n=10,min,pos,temp;
    for(i=0;i<n;i++){
        min=a[i];
        pos=i;
       for(j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                pos=j;
            }
       }
       temp=a[i];
       a[i]=a[pos];
       a[pos]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
