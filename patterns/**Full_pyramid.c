//stars.
/*#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=1;j<2*(r-i);j++){
            printf(" ");
        }
        for(int k=0;k<=2*(i);k++){
            printf("* ");
        }
        printf("\n");
    }
}*/
//number.
/*#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=0;i<=r;i++){
        for(int j=0;j<2*(r-i)-1;j++){
            printf(" ");
        }for(int k=0;k<=2*(i);k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
}*/
//letters.
#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<2*(r-i);j++){
            printf(" ");
        }for(int k=0;k<=2*i;k++){
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
}