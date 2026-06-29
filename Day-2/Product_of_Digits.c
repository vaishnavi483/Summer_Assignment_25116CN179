#include<stdio.h>
int main()
{
    int n,temp,p=1;
    printf("Enter a number");//prompting for input
    scanf("%d",&n);//taking input
    temp=n;

    while(temp!=0)//loop for calculating product of digits
    {   
        p=p*(temp%10);//multiplication of each extracted digit
        temp=temp/10;//reducing the digit after last digit has been extracted
    }
    printf("The product of digits of %d is %d",n,p);//displaying output
    return 0;
}