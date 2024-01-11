#include<stdio.h>
main()
{

//*****************GST PROBLEM**********************
   /* int x,y,gst,tw,gst2;
    float total;
    printf("Enter the amount for 1 plate of idli and dosa:");
    scanf("%d %d",&x,&y);
    //printf("Enter the value of gst:");
    //scanf("%d",&gst2); // doubt scanf
    
    tw = 5*(x+y);
    printf("total bill without gst:%d\n",tw);
    gst = tw * 0.1;
    total = tw + gst;
    printf("\nTotal Bill with gst :%.2f",total);*/

//***************BMI CALCULATION*************************

   /* int bmi,kg;
    float m;
    printf("Enter the value of kg and m: ");
    scanf("%d %f",&kg,&m);

    bmi=kg/(m*m);
    printf("BMI result:%d",bmi);*/


//****************volume of sphere*******************


    int r;
    float volume,pi = 3.14;

    printf("Calculate the volume of sphere");
    scanf("%d",&r);
    volume = 1.33*pi*(r*r*r);
    printf("The volume of sphere is %.2f",volume);
}
