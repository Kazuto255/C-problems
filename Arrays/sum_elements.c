#include<stdio.h>
int main(){
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    sum+=a[i][j];
               }
        }
          printf("Sum of all elements = %d",sum);
}
