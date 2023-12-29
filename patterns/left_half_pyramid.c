//LEFT HALF PYRAMID.
/*#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=1;j< 2*(r-i);j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}*/

//LEFT HALF PYRAMID NUMBER.
/*#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=1;j<2*(r-i);j++){
            printf(" ");
        }for(int k=0;k<=i;k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
}*/
//LEFT HALF PYRAMID LETTER.
#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=1;j<2*(r-i);j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
}