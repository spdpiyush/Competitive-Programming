//CodeChef Problem : Chef and Table Tennis (Begineer)
//Problem Code : TTENIS
//Author : PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,o,z,l,count,set;
	char str[102];
	scanf("%d",&t);
	while(t--)
	{
		set=0;
		scanf("%s",str);
		l=strlen(str);
		z=0;
		o=0;
		for(i=0;i<l;i++)
		{
			if(str[i]=='0')
			z++;
			else
			o++;
			if((o>10 && z<10) || (o>=10 && z>=10 && o-z>=2))
			{
				set=1;
				printf("WIN\n");
				break;
			}
			else
			continue;
		}
		if(set==0)
		printf("LOSE\n");
	}
	return 0;
}
