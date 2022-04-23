//a c program which takes input array of integer and find out number of duplicates of any number from array. 
#include<stdio.h>
int main()
{
    int a[5];
    int i,j,s,f,d=0;
    for(i=0;i<5;i++)
    {
        printf("enter numbers");
        scanf("%d",&a[i]);
        
    }
    for(s=0;s<5;s++)
    {
        for (j=s;j<5; j++)
        {   a[5]=0;
                if(a[s]==a[j+1])
                { 
                     d=d+1;
                    f=1;
                   
                 }
        
        }
                if(f==1)
                {
                    printf("\n no fo duplicates d= = %d ",d);
                             break;
                }
    } 
 
    
}