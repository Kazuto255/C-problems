#include<stdio.h>
int main(){
    int a=1,i,n,rows,sum;
    printf("No.of rows: ");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++){
        a=1;
        for(i=1;i<=rows;i++){
            printf(" %d ",a);
            a = a * (rows-i)/i;
        }
        printf("\n");
    }
    return 0;
}