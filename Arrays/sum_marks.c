#include<stdio.h>
int main(){
    int a[100],i,n,sum;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum += a[i];
        avg = (float)sum/n;
    }
    printf("%d = sum\n %.1f  = avg",sum,avg);
}