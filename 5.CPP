#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*next;
};
typedef struct node stack;
stack * top= NULL;
void push(int item);
int pop();
void display();
void push(int item)
{
stack*newnode;
newnode=(stack*)malloc(sizeof(stack));
newnode->info=item;
newnode->next=top;
top=newnode;
}
int pop()
{
stack*n;
int x;
if(top==NULL)
{
printf("stack underflow\n");
return 0;
}
else
{
n=top;
top=n->next;
x=n->info;
free(n);
return x;
}
}
void display()
{
stack*i;
printf("elements of stack are\n");
for(i=top;i!=NULL;i=i->next)
{
printf("%d\t", i->info);
}
}
void main()
{
int i,number;
clrscr();
while(1)
{
printf("\n press 1 to insert: \n press 2 to delete: \n press 3 to display: \n press 4 to exit:");
scanf("%d",&i);
switch(i)
{
case 1:printf("enter the item=");
scanf("%d",&number);
push(number);
break;
case 2:printf("deleted item is %d", pop());
break;
case 3:display();
break;
case 4:exit(0);
}
}
}