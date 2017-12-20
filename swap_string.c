#include<stdio.h>
#include<string.h>
void main()
{
char str[100],t;
int length,i,j;
printf("ENTER THE STRING\n");
scanf("%s",str);
length=strlen(str);
printf("THE LENGTH OF STRING IS:%d\n",length);
if((length%2)==0)
{
for(i=0;i<length;i++)
{
t=str[i];
str[i]=str[i+1];
str[i+1]=t;
i++;
}
printf("%s",str);
}
else
{
for(j=0;j<length;j++)
{
if(str[j+1]!='\0')
{
t=str[j];
str[j]=str[j+1];
str[j+1]=t;
j++;
}
}
printf("%s",str);
}
}
