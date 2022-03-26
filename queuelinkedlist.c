#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node_l
{
    int data;
    struct node_l *link;
} node ;
                                                                                                                                                                                                                                                                                    
node *create( node *head,node  *front,node  *rear)
{ 
    
    int item;
    int ch=1,option;
    if(head!=NULL)
    {
        printf("------list of queue already exists----");
        return (head);

    }
    front=rear=head; 
        while (ch==1)
     { 
        
         printf("\nenter the element we want to enter in linkedlist : ");
         scanf("%d",&item);
          node* new= ( node*)malloc(sizeof( node));
          new->data=item;
          new->link=NULL;
        if (head==NULL)
        {
            front=rear=head=new;
        }
        else
        {
            rear->link=new;
            rear=new;
        }
           
        printf("\t\n element entered successfully \n\n");
       printf("  1)  continue\n ");
       printf(" 2)  discontinue   :");
       scanf("%d",&option);
       ch=option;
        }
        
     return (head);
}
node  *delete(node *front)
{

    front=front->link;
    printf(" \t\t\nitem succesfully deleted\n");
    
    return (front);

}
void print( node *head)
{
    node *t;
   
    if (head==NULL)
    {
        printf("------linkedlist has already a node----");
     return ;
    }
    else
    
    { 
        t=head;
             printf("\n\t   address      data     new address");
        while(t!=NULL)
        {   
            printf("\n\t%10u       %d       %10u   ",t,t->data,t->link);
            t=t->link;
        }
    }
    
}
int main()
{
    
    int choice;
    node* head= ( node*)malloc(sizeof( node));
     node* front= ( node*)malloc(sizeof( node));
      node* rear= ( node*)malloc(sizeof( node));  
     head=NULL;
     while (1)
     {
      printf("\n\t-----------main menu-------\n");
     printf("\t 1) create a queue using SLL\n");
     printf("\t 2) insert an element\n");
     printf("\t 3) delete an element\n");
     printf("\t 4) display queue after deleting element\n");
     printf("\t 5) display\n");
     printf("\t 6) exit\n");

     printf("\tenter the choice  ");

     scanf("%d",&choice);

        switch(choice)
      {
         case 1:
        head=create(head,front,rear);
        front=head;
           break;
        case 3:
        front=delete(front);
        break;
        case 4:
        if (front==NULL)
        {
            printf("\t\t\n---queue is empty---\n");
        }
        else
        print(front);
        break;
        case 5:
         print(head);
         break;
        case 6:
          exit(0);
      }
     }
    }
