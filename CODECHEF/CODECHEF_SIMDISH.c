//CodeChef Problem : Similar Dishes (Beginner)
//Problem Code : SIMDISH
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
struct first
{
	char str[12];
}f1[4];
struct second
{
	char str1[12];
}f2[4];
int main()
{
	int t,i,sum,j,count;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<4;i++)
		{
			scanf("%s",f1[i].str);
		}
		for(i=0;i<4;i++)
		{
			scanf("%s",f2[i].str1);
		}
		sum=0;
		count=0;
		for(i=0;i<4;i++)
		{
			count=0;
			for(j=0;j<4;j++)
			{
				if(strcmp(f1[i].str,f2[j].str1)==0)
				count++;
			}
			if(count>=1)
			sum++;
		}
		if(sum >= 2)
		printf("similar\n");
		else
		printf("dissimilar\n");
	}
	return 0;
}
