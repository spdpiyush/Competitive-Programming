//CodeChef Problem : Jenny and Magic  Book (LOCAPR17)
//Problem Code : JMBOOK
//Author : Piyush
#include<stdio.h>
#include<math.h>
int check(int);
int Fs(int);
int main()
{
	int t,x,i,count,ans,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		count=0;
		i=1;
		j=pow(10,x);
		while(i<j)
		{
			ans=check(i);
			if(ans!=0)
			{
				if(x==Fs(i))
				count++;
			}
			i=i+2;
		}
		printf("%d\n",count);
	}
	return 0;
}
int Fs(int no)
{
	int ans=0;
	while(no)
	{
		ans+=((no%10))%4;
		no/=10;
	}
	return ans;
}
int check(int no)
{
	int p;
	while(no)
	{
		p=no%10;
		if(p==1 || p==3 || p==5)
		{
			no=no/10;
		}
		else
		return 0;
	}
	return 1;
}
