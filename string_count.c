#include<stdio.h>
#include<string.h>
void main()
{
	int i,count[50],n,j,max=0;
	char ch[50];
	printf("ENTER THE STRING:\n");
	scanf("%s",ch);
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
		count[i]=1;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ch[i]==ch[j])
			{
				count[i]++;
				ch[j]='\0';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(ch[i]!='\0')
		{
			printf("\nTHE COUNT OF CHARACTER %c is %d",ch[i],count[i]);
			
		}
	}
	
	
}
