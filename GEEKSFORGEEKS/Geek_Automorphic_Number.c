//GeeksForGeeks Problem : Automorphic Number (Basic)
//Author : By PIYUSH
#include<stdio.h>
int main()
{
	int t,no,i,count;
	long int ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		ans=no*no;
		i=0;
		count=0;
		while(no)
		{
			i++;
			if((no%10) == (ans%10))
			{
				count++;
				
			}
			else
			{
				i=-1;
				break;
			}
			no=no/10;
			ans=ans/10;
			
		}
		if(count == i)
		printf("Automorphic\n");
		else
		printf("Not Automorphic\n");
	}
	return 0;
}
