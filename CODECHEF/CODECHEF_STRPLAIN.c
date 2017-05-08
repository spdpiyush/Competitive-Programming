//CodeChef Problem : Palindromic String (Beginner)
//Problem Code : STRPLAIN
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,count,l1,l2;
	char str[1002],str1[1002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",str,str1);
		l1=strlen(str);
		l2=strlen(str1);
		for(i=0;i<l1;i++)
		{
			count=0;
			for(j=0;j<l2;j++)
			{
				if(str[i]==str1[j])
				{
					count++;
					break;
				}
			}
			if(count!=0)
			break;
		}
		if(count==0)
		printf("No\n");
		else
		printf("Yes\n");
	}
	return 0;
}
