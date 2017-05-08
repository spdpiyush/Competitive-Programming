//CodeChef Problem : Malvika is peculiar about color of balloons(Beginner)
//Problem Code : CHN09
//Auhtor : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,count_a,count_b,i;
	char str[102];
	scanf("%d",&t);
	while(t--)
	{
		count_a=0;
		count_b=0;
		scanf("%s",str);
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='a')
			count_a++;
			else if(str[i]=='b')
			count_b++;
		}
		if(count_a>count_b)
		printf("%d\n",count_b);
		else if(count_a<count_b)
		printf("%d\n",count_a);
		else
		printf("%d\n",count_a);
	}
	return 0;
}
