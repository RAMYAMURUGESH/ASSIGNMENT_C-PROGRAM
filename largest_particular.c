//to find the largest among 'm' elements.

#include<stdio.h>
void main()
{
	int a[20],n,m,i,j,t,b;
	printf("ENTER THE TOTAL NO.OF.ARRAY ELEMENTS:\n");
	scanf("%d",&n);
	printf("ENTER THE ARRAY ELEMENTS:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER THE m VALUE:\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]>a[j])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		
		}
	
		b=a[m-1];
	}
	printf("\n\nTHE LARGEST AMONG FIRST %d ELEMENTS IS %d",m,b);
}
