#include<stdio.h>
int main()
{
    int n,i,j,a=1,b;
    printf("enter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        for(b=i;b<n;b++){
                    printf(" ");
                }
        for(j=1;j<=a;j++)
        {
                
            
            
        printf("*");
            
            
        }
        printf("\n");
        a=a+2;
    }

}