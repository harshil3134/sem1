#include<stdio.h>
void main()
{
    float bas,da,ta,ha,fi;
    printf("enter the basic salary amoumt");
    scanf("%f",&bas);

        printf("enter the percentage daily allowance");
    scanf("%f",&da);

            printf("enter the percentage  health allowance");
    scanf("%f",&ha);

            printf("enter the  percentage travel allowance");
    scanf("%f",&ta);

fi=fi+bas;
fi=fi+ bas*(da/100);
fi=fi+ bas*(ha/100);
fi=fi+ bas*(ta/100);
printf("the final salary  is %f",fi);

}