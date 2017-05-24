//CodeChef Problem : Temple Land(SNCKQL17)
//Problem Code : TEMPLELA
//Author : Piyush
#include<stdio.h>
int main()
{
	int t,l,no[100],i,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&l);
		for(i=0;i<l;i++)
		{
			scanf("%d",&no[i]);
		}
		if(l%2 == 0)
		printf("no\n");
		else
		{
			if(no[0]!=1)
			printf("no\n");
			else
			{
				count=0;
				for(i=1;i<l/2;i++)
				{
					if(no[i]==(no[i-1]+1))
					count++;
					else
					{
						count=-1;
						break;
					}
				}
				if(count==-1)
				printf("no\n");
				else
				{
					if(no[l/2]>no[(l/2)-1])
					{
						count=0;
						for(i=l/2+1;i<l;i++)
						{
							if(no[i]==(no[i-1]-1))
							count++;
							else
							{
								count=-1;
								break;
							}
						}
						if(count==-1)
						printf("no\n");
						else
						printf("yes\n");
					}
					else
					printf("no\n");
				}
			}
		}
	}
	return 0;
}
