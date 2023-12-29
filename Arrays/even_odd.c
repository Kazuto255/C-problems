#include<stdio.h>
int main(){
    int num[10],i,oddcount=0,evencount=0;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
        if(num[i]%2==0){
        evencount++;
    }
    if(num[i]%2 !=0){
        oddcount++;
    }
    }
    
    printf("even=%d && odd=%d",evencount,oddcount);
}
