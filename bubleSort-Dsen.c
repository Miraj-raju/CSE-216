#include<stdio.h>
int main(){
    int a[]={9,4,11,7,17,13,33,45,3,27};
    int c,d,n=10,swap;

    for(c=0;c<n-1;c++){
        for(d=0;d<n-c-1;d++){
            if(a[d]<a[d+1]){
              swap=a[d];
              a[d]=a[d+1];
              a[d+1]=swap;
            }
        }
    }
    for(c=0;c<n;c++){
        printf("%d ", a[c]);
    }
}
