//this program checks if enter integer is armstrong number or not.
#include<stdio.h>
int main()
{
    int n,r=0,i,s=0;
    printf("enter the number");
    scanf("%d",&n);
    i=n;
     for(;n>0;)
     {
         r=n%10;
         s=s+(r*r*r);
     
     n=n/10;

    }
    if(i==s)
    {
    printf("%d is an armstrong number",i);
    }
}