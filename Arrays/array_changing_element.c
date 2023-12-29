#include<stdio.h>
int main(){
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    a[1] = 50;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}