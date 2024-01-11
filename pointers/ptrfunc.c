//*****************EXCHANGE USING POINTERS****************************
#include<stdio.h>
main()
{
    int x=200,y=100;

    printf("Before Exchange x:%d and y = %d\n\n",x,y);
    exchange(&x,&y);
    printf("After exchange x :%d and y = %d\n\n",x,y);
}
exchange(a,b)
int *a, *b;
{
    int t;
    t = *a;
    *a =*b;
    *b = t;

}