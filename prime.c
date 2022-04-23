#include<stdio.h>
int main()
{
    int n,i,f;
    printf("enter the number");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)

        {
            f=1;
            break;
        }
        else
        {
            f=0;
        }
    }
    if(f==1)
    {
        printf("it is a prime number");

    }
    else{
        printf("not a prime number");

    }
}