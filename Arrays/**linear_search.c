#include<stdio.h>
int main(){
    int a[100],i,n,search;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("%d is found at %d location\n",search,i+1);
            break;
        }else{
            printf("%d not found in the lsit\n",search);
        }
    }
}