#include<stdio.h>

int main(){
    int a[]={9,4,11,7,17,13,33,45,3,27};
    int i,j,n=10,b[n];
        for(i=0;i<n;i++){
            j=i-1;

            while(b[j]>a[i] && j>=0){
                b[j+1]=b[j];
                j--;
            }
            b[j+1]=a[i];
        }
        for(i=0;i<n;i++){
            printf("%d ", b[i]);

        }

    return 0;
}
