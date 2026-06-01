#include<stdio.h>
int main()
{
    int a,i,f=1;
    printf("Enter the number whose factorial you want:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("Factorial of negative numbers can't be calculated");
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            f=f*i;
        }
    printf("The factorial of %d is %d",a,f);
    }
    return 0;
}

