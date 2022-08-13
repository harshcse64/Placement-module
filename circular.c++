#include <bits/stdc++.h>
using namespace std;

struct node{
        int info;
        node *next;
};

struct node* head=NULL;
void create(struct node*);
 void display(struct node*);


int main()
{
   int ch;
   
   while(1)
   {
        //printf("\nPress 1:create 2: dispaly 0:Exit\n");
        //printf("Enter your choice:");
        //scanf("%d",&ch);
        cout<<"\n press 1: create 2: dipaly 0: exit";
        cout<<"enter your choice :";
        cin>>ch;
        switch(ch)
        {

                case 1:create(head);break;
                case 2:display(head); break;
                case 0: exit(0);break;
                default: printf("Wrong choice ...");

        }
    }

	return 0;

}

void create(struct node*ptr)
{
    struct node* temp;
    int data;
    temp=(struct node*)malloc(sizeof(struct node));
    //printf("Enter info:");
    cout<<"enter info:";
    //scanf("%d",&data);
    cin>>data;
    temp->info=data;
    temp->next=NULL;
    if(head == NULL)
    {
		head=temp;
    }
    else
    {
       
       while(ptr->next!=NULL)
       {
           ptr=ptr->next;
       }
       ptr->next-temp;
    }

}


void display(struct node* ptr)
{
    while(ptr!=NULL)
   			{
      			printf("%d",ptr->info);
      			ptr=ptr->next;
    		}
}


























/* #include <bits/stdc++.h>

struct node{
        int info;
        struct node *next;
};

struct node* head=NULL;
void create(struct node*);
//void display(struct node*);


int main()
{
   int ch;
   
   while(1)
   {
        printf("\nPress 1:create 0:Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {

                case 1:create(head);break;
                
                case 0: exit(0);break;
                default: printf("Wrong choice ...");

        }
    }

	return 0;

}

void create(struct node*ptr)
{
    struct node* temp;
    int data;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter info:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    if(head == NULL)
    {
		head=temp;
    }
    else
    {
       
       while(ptr->next!=NULL)
       {
           ptr=ptr->next;
       }
       ptr->next-temp;
    }

}   */