// RIGHT ANGLED TRIANGLE PATTERN.

/*#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i = 1;i<=r;i++){
        for(int j =1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}*/

// Right angled numbered pattern.
/*#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j = 0;j<=i;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
}*/

// RIGHT ANGLED TRIANGLE FOR LETTERS.
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i =1;i<t;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
}