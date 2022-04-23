//takes three integer as input and print which is lagest number of the three.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a b and c");
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d ",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is max");
        }
        else {
            printf("c is maximum");
        }

    }
    else if(b>c){
        printf("b is maximum");
    }
    else{
        printf("c is maximum");

    }
}