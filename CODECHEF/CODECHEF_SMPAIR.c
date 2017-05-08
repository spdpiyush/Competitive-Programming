//CODECHEF Problem : The Smallest Pair.(Beginner)
//Problem Code : SMPAIR
//Author : By PIYUSH.
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*top=NULL;
void push(int);
void disp(int);
int sum(void);
int main()
{
	int t,no,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		n=no;
		push(no);
		disp(n);
		printf("%d",sum());
		printf("\n");
	}
	return 0;
}
void push(int no)
{
	int n;
	while(no--)
	{
		struct node *tmp;
		tmp = (struct node *)malloc(sizeof(struct node));
		scanf("%d",&n);
		tmp->info=n;
		tmp->link=top;
		top=tmp;
	}
}
void disp(int no)
{
	int i,temp;
	struct node *tmp;
	for(i=1;i<no;i++)
	{
		tmp=top;
		while(tmp!=NULL)
		{
			if(tmp->info > tmp->link->info)
			{
				temp=tmp->info;
				tmp->info = tmp->link->info;
				tmp->link->info=temp;
			}
			tmp=tmp->link;
		}
	}
}
int sum(void)
{
	struct node *tmp;
	int sum=0;
	tmp=top;
	sum=sum + tmp->info;
	tmp=tmp->link;
	sum=sum + tmp->info;
	return sum;
}
