//GeeksForGeeks Problem : Implement Two Stacks in A Array (Easy)
//Author : PIYUSH
#include<stdio.h>
#include<stdlib.h>
#define MAX 205
int stack[MAX];
int top1=-1;
int top2=MAX-1;
int pop1(void);
int pop2(void);
void push1(int);
void push2(int);
int main()
{
	int t,q,x,q1,q2,item1,item2,i;
	scanf("%d",&t);
	while(t--)
	{
		top1 = -1;
		top2 = MAX-1;
		scanf("%d",&q);
		for(i=1;i<=q;i++)
		{
			scanf("%d%d",&q1,&q2);
			if(q1==1 && q2==1)
			{
				scanf("%d",&x);
				push1(x);
			}
			if(q1==1 && q2==2)
			{
				item1=pop1();
				printf("%d\n",item1);
			}
			if(q1==2 && q2==1)
			{
				scanf("%d",&x);
				push2(x);
			}
			if(q1==2 && q2==2)
			{
				item2=pop2();
				printf("%d\n",item2);
			}
			
		}
		printf("\n");
	}
	return 0;
}
void push1(int no)
{
  	top1 = top1+1;
  	stack[top1]=no;
}
void push2(int no)
{
	top2 = top2 - 1;
	stack[top2]=no;
	
}
int pop1()
{
	int no;
	if(top1 ==-1)
	return -1;
	else
	{
	  no = stack[top1];
	  top1 = top1 - 1;	
	}
	return no;
}
int pop2()
{
	int no;
	if(top2 == MAX-1)
	return -1;
	else
	{
		no=stack[top2];
		top2=top2+1;
	}
	return no;
}
