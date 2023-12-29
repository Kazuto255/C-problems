//reverse half pyramid.
/*#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--)
            printf("* ");
            printf("\n");
        }
    }*/
//numbers.
/*#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--)
            printf("%d ",j);
            printf("\n");
        }
    }*/

//letters.
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=a;j<=i;j--)
            printf("%c ",j-1);
            printf("\n");
        }
    }
