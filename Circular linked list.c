#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
int data;
struct node *next;
}node;
node *head=NULL,*newn,*temp,*t;
void insert();
void del();
void display();
int search();
void search1();
void main()
{
int ch;
while(1)
{
printf("CIRCULARLY LINKED LIST OPERATIONS ARE\n");
printf("1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit\n");
printf("Enter Ur Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();break;
case 2:del();break;
case 3:display();break;
case 4:search1();break;
case 5:exit(0);
default:printf("Enter the correct option\n");
break;
}
}
}
void insert()
{
int no,op;
newn=(node *)malloc(sizeof(node));
printf("Enter the element to be inserted:");
scanf("%d",&newn->data);
printf("1.Insert at First\n2.Insert at Middle\n3.Insert at Last\n");
printf("Enter the option:");
scanf("%d",&op);
switch(op)
{
case 1: if(head==NULL)
{
head=newn;
newn->next=newn;
}
else
{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=newn;
newn->next=head;
head=newn;
}
break;
case 2:if(head->next==NULL)
{
printf("Single node entry so insertion is not allowed\n");
}
else
{
printf("Enter the data after which the element to be inserted:");
scanf("%d",&no);
temp=head;
while(temp->data!=no)
{
temp=temp->next;
}
newn->next=temp->next;
temp->next=newn;
}
break;
case 3:if(head==NULL)
{
head=newn;
newn->next=newn;
}
else
{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=newn;
newn->next=head;
}
break;
}
}
void del()
{
int op,no;
if(head==NULL)
{
printf("List is empty\n");
}
else
{
printf("1.Deletion at first\n2.Deletion at middle\n3.Deletion at last\n");
printf("Enter your choice:");
scanf("%d",&op);
switch(op)
{
case 1: if(head->next==head)
{
printf("The deleted element is: %d",head->data);
head=NULL;
}
else
{
temp=head;
printf("The deleted element is: %d",temp->data);
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=head->next;
head=head->next;
free(temp);
}
break;
case 2: if(head->next==head)
{
printf("Single node entry cannot perform deletion\n");
}
else
{
printf("Enter the element to be deleted:");
scanf("%d",&no);
temp=head;
while(temp->data!=no)
{
t=temp;
temp=temp->next;
}
printf("The deleted element is: %d",temp->data);
t->next=temp->next;
free(temp);
}
break;
case 3: if(head->next==head)
{
printf("The deleted element is: %d",head->data);
head=NULL;
}
else
{
temp=head;
while(temp->next!=head)
{
t=temp;
temp=temp->next;
}
printf("The deleted element is: %d",temp->data);
t->next=head;
free(temp);
}
break;
}
}
}
void display()
{
if(head==NULL)
{
printf("List is empty\n");
}
else
{
temp=head;
printf("The elements in a list are:\n");
do
{
printf("%d\t",temp->data);
temp=temp->next;
}while(temp!=head);
}
}
void search1()
{
int n,index;
printf("Enter element to search: ");
scanf("%d", &n);
index = search(head, n);
if (index == -1)
printf("%d not found in list.\n", n);
else
printf("%d found at %d position.\n", n, (index + 1));


}
int search(struct node *head, int key)
{
int index = 0;
struct node *current = head;
do
{
if (current == NULL)
return;
if (current->data == key)
return index;
current = current->next;
index++;
} while (current != head);
return -1;
}
