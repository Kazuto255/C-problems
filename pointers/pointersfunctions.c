/*****************POINTER TO FUNCTIONS ******************/

#include<math.h>
#define Pi 3.1415926

main()
{
    double y(), cos(), table();

    printf("Table of y(x) = 2*x*x-x+1\n\n");
    table(y,0.0,2.0,0.5);

    printf("\nTable of cos(x) \n\n");
    table(cos,0.0,Pi,0.5);
}
double table(f,min,max,step)
double (*f)(),min,max,step;
{
    double a,value;
    for(a = min;a <= min; a += step)
    {
        value = (*f)(a);
        printf("%5.2f  %10.4f \n",a,value);
    }

}
double y(x)
double x;
{
    return(2*x*x-x+1);
}