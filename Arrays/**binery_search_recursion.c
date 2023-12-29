//BINERY SEARCH USING RECUSRSION

#include<stdio.h>
int binery_search(int a[],int search,int low, int n,int high){
    int mid;
    if(low<=high){
        mid=(low+high)/2;
        if(a[mid] == search){
            return mid+1;
        }
        else if(a[mid] < search){
            return binery_search(a,search,n,low,mid+1);
        }else if(a[mid] > search){
            return binery_search(a,search,n,mid+1,high);
        }
    }else{
        printf("Not in the lsit\n");
    }
}
int main(){
    int n,search,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&search);
    binery_search(a,search,n,0,n-1);
    if(binery_search(a,search,n,0,n-1)){
        printf("Element found\n");
    }
}