#include<stdio.h>
int main(){
    int search,n,i,a[100],low=0,high;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&search);
    high = n-1;
    int mid = (low+high)/2;
    while(low<=high){
        if(a[mid] == search){
            printf("%d found at location %d ",search,mid+1);
            break;
        }else if(a[mid] < search){
            low = mid+1;
        }else {
            low = mid-1;
            mid = (low+high)/2;
        }
    }
    if(low >high){
        printf("Not found in the list\n");
    }

}