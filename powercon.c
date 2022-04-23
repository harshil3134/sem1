#include<stdio.h>
void main()
{
    float u;
    printf("enter the value :");
    scanf("%f",&u);
    if(u>=1 && u<=100)
    {
        u=u*0.5;
        
    }
    else if(u>100 && u<=200 )
    {
        u=50+(u-100)* 0.65;
        
    }
    else if(u>200 && u<=300){
   u=115+(u-200)*0.8;
    }
    else{
        if(u>0){
            u=195+(u-300)*1;
        }
    }
    printf("%f",u);
}