#include<stdio.h>
int main()
{ 
    int nums[5],target,i,j;
    printf("Enter the elements in the array");
    for(i=0;i<5;i++)
    {
       scanf("%d",&nums[i]);
    }
     
    printf("Enter the target");
    scanf("%d",&target);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("%d and %d are the indices whose elements add up to  value of the target",i,j);
            }
            else
            {     
                printf("There are no two such indices whose elements add up to the value of target");

            }
        }
    }
    return 0;
}
