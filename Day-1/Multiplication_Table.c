#include<stdio.h>
int main()
{ 
    int i,f,a=1;
    printf("Enter the number whose multiplication table you want:\n");
    scanf("%d",&a);
    printf("The table of %d is:\n",a);
    for(i=1;i<=10;i++)
    {
        f=a*i;
        printf("%d*%d=%d\n",a,i,f);
    }
    printf("Thank You");
    return 0;

}
