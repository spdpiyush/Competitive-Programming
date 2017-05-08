//CodeChef  Problem :Chef and Digits of a Number(Beginner)
//Problem Code : LONGSEQ
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,count_o,count_z,l;
	char str[100002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		count_o=0;
		count_z=0;
		for(i=0;i<l;i++)
		{
			if(str[i]== '0')
			count_z++;
			else
			count_o++;
		}
		if(count_z==1 || count_o==1)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
