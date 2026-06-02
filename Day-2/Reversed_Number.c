#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter a number:"); //prompting for input
    scanf("%d",&n); //taking input 
    printf("The reversed number is:");
    
    while(n!=0)//loop to reverse the number taken as input
    {
       temp=n%10;//extracting digits
       printf("%d",temp);
       n=n/10;//reducing the number after the last digit from it has been extracted
    }
    return 0;

}