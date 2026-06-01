#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("N is the maximum limit upto which you want to calculate the sum\n");
    printf("Enter the value for N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of natural number upto %d is %d",n,sum);
    return 0;
}