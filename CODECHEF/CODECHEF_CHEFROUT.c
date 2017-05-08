//CodeChef Problem : Chef and His Daily Routine (MAY17)
//Problem Code : CHEFROUT
//Author :Piyush
#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,count;
	char str[100002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		count=0;
		l=strlen(str);
		if(l==1)
		printf("yes\n");
		else
		{
			for(i=0;i<l-1;i++)
			{
				if(str[i]=='C')
				{
					if(str[i+1]=='C' || str[i+1]=='E' || str[i+1]=='S')
					count++;
				}
				else if(str[i]=='E')
				{
					if(str[i+1]=='E' || str[i+1]=='S')
					count++;
					else
					{
						count=-1;
						break;
					}
				}
				else
				{
				    if(str[i+1]=='S')	
				    count++;
				    else
				    {
				    	count=-1;
				    	break;
				    }
				}	
			}
			if(count==-1)
			printf("no\n");
			else
			printf("yes\n");
		}
	}
	return 0;
}
