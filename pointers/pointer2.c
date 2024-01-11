#include<stdio.h>
main()
{
    char A;
    int x,y,*p;
    float q,t;
    A = 'a';
    x = 125;
    y = 100;
    q = 12.00;
    t = 15.12;
    printf(" %c is stored at the addr %u\n",A,&A);
    
    printf("%d is stored at addr %u\n",y,&y);
    printf("%f is stored at addr %u\n",q,&q);
    printf("%f is stored at addr %u\n",t,&t);

    p = &x;
    y = *p;
    printf("%d is stored at addr %u\n",x,&x);
    printf("%d is stored at %u \n",*&x,&x);
    printf("%d is stored at %u \n",*p,p);
   // Assigning a value to a variable through pointer
   *p = 225;
   printf("%d \n",x);

   p++;
     printf("%d is stored at %u \n",*p,p);
    






}