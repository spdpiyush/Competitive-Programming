//CodeChef Problem : Chef And Coloring (Beginner)
//Problem Code : COLOR
//Author : PIYUSH
#include<stdio.h>
int max(int,int,int);
int main()
{
	int t,n,i,j,r_count,b_count,g_count,count,ma;
	char str[100005],c;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		r_count=0;
		b_count=0;
		g_count=0;
		scanf("%d",&n);
		scanf("%s",str);
		for(i=0;i<n;i++)
		{
			if(str[i] == 'R')
			r_count++;
			else if(str[i] == 'G')
			g_count++;
			else
			b_count++;
		}
		ma=max(r_count,g_count,b_count);
		if(ma == 1)
		c='R';
		else if(ma == 2)
		c='G';
		else
		c='B';
		for(i=0;i<n;i++)
		{
			if(str[i]!=c)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
int max(int r,int g,int b)
{
	if(r>g)
	{
		if(r>b)
		return 1;
		else
		return 3;
	}
	else
	{
		if(g>b)
		return 2;
		else
		return 3;
	}
}
