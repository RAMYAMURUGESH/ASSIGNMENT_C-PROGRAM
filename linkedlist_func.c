
#include <stdio.h>
#include<stdlib.h>
struct nd{
    int data;
    struct nd *next;
};
typedef struct nd node;
int main(void)
{
   node *head,*first,*sec,*temp;
   head=(node*)malloc(sizeof(node));
   first=(node*)malloc(sizeof(node));
   sec=(node*)malloc(sizeof(node));
   scanf("%d",&head->data);
   head->next=first;
   scanf("%d",&first->data);
   first->next=sec;
  scanf("%d",&sec->data);
   sec->next=NULL;
  
   display(head);
    temp=head;
}
void display(node * temp)
{
    printf("THE DATA IN THE LIST ARE");
    while(temp!=NULL)
    {
        printf("\t%d\n",temp->data);
        temp=temp->next;
    }
}


