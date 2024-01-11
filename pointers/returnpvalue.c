#include<stdio.h>
main()
{
    int x = 20, y = 10,s,d;
    mathoperation(x,y,&s,&d);

    printf("s = %d , d = %d",s,d);
}
void mathoperation(int a, int b, int *sum, int *diff)
{
    *sum = a+b;
    *diff = a-b;
}