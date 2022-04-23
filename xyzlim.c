#include<stdio.h>
int main()

{
    int n,t;
    scanf("%d",&n);
    if(n>10)
    {
    t=21000-(n-10)*100;
    }
    else {
        t=2100*n;
            }
            printf("%d",t);
}