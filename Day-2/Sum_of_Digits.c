#include<stdio.h>
int main()
{
    int n,temp,sum=0;
    printf("Enter the number:");//prompting for input
    scanf("%d",&n);//taking input
    temp=n;
    while(n!=0)//loop for calculating the sum of digits of the number
    {

        n=temp%10;//extracting last digit
        sum=sum+n;//additon of each extracted digit
        temp=temp/10;//reducing the number after the last digit from it has been extracted
    }
    printf("The sum of digits=%d",sum);//displaying output
    return 0;
}