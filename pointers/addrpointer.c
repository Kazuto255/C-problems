#include<stdio.h>
main()
{
    int v = 5;
    int *p;
    p = &v;
    printf("v : %d\n",&v);
    printf("v : %d\n",v);
    printf("Address of v is %u\n",p);
    printf("Address of v is %u\n",p);
    printf("Address of v is %p\n",&v); //%p is addr is hexadecimal.

    

}