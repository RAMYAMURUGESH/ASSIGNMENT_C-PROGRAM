
#include <stdio.h>
#include<stdlib.h>
struct nd
{
    int data;
    struct nd *next;
};
typedef struct nd node;
void main()
{
    node *head,*first,*second,*temp;
    head=(node*)malloc(sizeof(node));
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    scanf("%d",&head->data);
    head->next=first;
   scanf("%d",&first->data);
    first->next=second;
   scanf("%d",&second->data);
    second->next=NULL;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}



