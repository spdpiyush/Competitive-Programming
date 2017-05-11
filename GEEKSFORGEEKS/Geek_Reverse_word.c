//GeeksForGeeks Problem : Reverse words in a Given String(Easy)
//Author:PIYUSH
#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,dot[2000],j,count=0;
	char str[2002],*p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		for(i=0;i<2000;i++)
		{
			dot[i]=0;
		}
		l=strlen(str);
		p=str;
		j=0;
		count=0;
		for(i=l-1;i>=0;i--)
		{
			if(str[i]=='.')
			{
				dot[j]=i;
				count++;
				str[i]='\0';
				j++;
			}
		}
		if(count == 0)
		printf("%s\n",str);
		else
		{
			for(i=1,j=0;i<=count;i++,j++)
			{
				p=&str[dot[j]+1];
				printf("%s",p);
				printf(".");
			}
			printf("%s\n",str);
		}
	}
	return 0;
}
