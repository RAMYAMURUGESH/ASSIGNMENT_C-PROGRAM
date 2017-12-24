//to find whether the given number is a power of 2 without using buit in func.
#include<stdio.h>
void main()
{
	int num,i,pow=1,count=0;
	printf("ENTER THE NUMBER:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		pow=pow*2;
		if(pow==num)
		{
			count=1;
		}
	}
	if(count==1)
	{
		printf("THE GIVEN NUMBER %d IS THE POWER OF 2",num);
	}
	else
	{
		printf("THE GIVEN NUMBER %d IS NOT THE POWER OF 2",num);
	}
}
