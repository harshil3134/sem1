//program takes amount and gst percentage.
#include<stdio.h>
void main()
{
    float gst,i,f;
    printf("enter the amoumt");
    scanf("%f",&i);

        printf("enter the gst");
    scanf("%f",&gst);

f=i* (gst/100);
printf("the gst amount for this product is %f",f);

}