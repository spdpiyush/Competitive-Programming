//GeeksforGeeks Problem : The Musketeers (Basic)
//Author : Piyush
#include<stdio.h>
#include<string.h>
int main()
	{
		int t,l,i,j,flag,k,f;
		char str[10002];
		scanf("%d",&t);
		while(t--)
		{
			scanf("%s",str);
			l=strlen(str);
			if(l==1)
			{
				if(str[0]=='0')
				printf("YES\n");
				else
				printf("NO\n");
			}
			else
			{
				for(i=0;i<l;i++)
				{
					if(str[i]=='0')
					{
						f=1;
						k=i;
						break;
					}
					else
					f=0;
				}
				if(f==0)
				printf("NO\n");
				else
				{
					for(j=i+1;j<l;j++)
					{
						if(str[j]=='0')
						k=j;
						else
						break;
					}
					if(k == l-1)
					printf("YES\n");
					else
					{
					  	for(i=k+1;i<l;i++)
					  	{
					  		if(str[i]==0)
					  		{
					  			flag++;
					  			break;
					  		}
					  	}
					  	if(flag==0)
					  	printf("YES\n");
					  	else
					  	printf("NO\n");
					}
				}	
			}
		}
	return 0;	
	}
