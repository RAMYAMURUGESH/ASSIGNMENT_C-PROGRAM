#include <stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char ch[50];
    int alpha_count=0,num_count=0,others=0,i;
    printf("ENTER THE CHARACTER:\n");
    scanf("%s",ch);
    int len=strlen(ch);
    printf("\n%d",len);
    for(i=0;i<len;i++)
    {
        if(isalpha(ch[i]))
        {
            alpha_count++;
        }
        else if(isdigit(ch[i]))
        {
            num_count++;
        }
        else
        {
            others++;
        }
    }
    printf("\nTHE NO.OF.ALPHABETS IN THE STRING IS:%d",alpha_count);
    printf("\nTHE NO.OF.INTEGERS IN THE STRING IS:%d",num_count);
    printf("\nTHE NO.OF.SPECIAL CHARACTERS IN THE STRING IS:%d",others);
    
}



