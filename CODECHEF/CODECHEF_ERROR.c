//CodeChef Problem : Chef and FeedBack(Easy)
//Problem Code : ERROR
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,i,count;
	char str[100006];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		count=0;
		for(i=0;str[i]!='\0';i++)
		{
			if((str[i]=='0' && str[i+1]=='1' && str[i+2]=='0') ||(str[i]=='1' && str[i+1]=='0' && str[i+2]=='1'))
			{
				count=1;
				break;
			}
		}
		if(count==1)
		printf("Good\n");
		else
		printf("Bad\n");
	}
	return 0;
}
