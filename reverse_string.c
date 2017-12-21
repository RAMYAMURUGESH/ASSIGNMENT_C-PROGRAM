#include<stdio.h>
#include<string.h>
void main()
{
    char ch[50],ch1[50];
    int i,len;
    printf("ENTER THE STRING:\n");
    scanf("%s",ch);
    len=strlen(ch);
    printf("THE LENGTH OF STRING IS :%d\n",len);
    printf("THE REVERSED STRING IS:\n");
    for(i=len;i>=0;i--)
    {
        ch1[i]=ch[i];
       printf("%c",ch1[i]);
       
    }
    printf("\n");
    printf("THE REVERSED STRING AFTER THE REMOVAL OF VOWEL IS:\n");
    for(i=(len-1);i>=0;i--)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
      {
         ;
      }
        else
        printf("%c",ch[i]);
    }
}
