#include<stdio.h>
int main(){
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Revesered array\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
}