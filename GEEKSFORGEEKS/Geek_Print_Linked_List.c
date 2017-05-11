//GeeksForGeeks Problem : Print Linked List Elements (Basic)
//Author : By PIYUSH
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
}*start = NULL;
struct node *insertnode(struct node *start,int);
void display(struct node *start);
int main()
{
	int t,no,i,data;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			scanf("%d",&data);
			start=insertnode(start,data);
		}
		display(start);
	}
	return 0;
}
struct node *insertnode(struct node *start,int data)
{
	struct node *tmp,*ptr;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=tmp;
	tmp->next=NULL;
	return start;
}
void display(struct node *start)
{
	struct node *ptr;
	ptr = start;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
	printf("\n");
}
