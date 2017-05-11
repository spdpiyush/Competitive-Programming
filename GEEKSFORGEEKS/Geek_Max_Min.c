//GeeksForGeeks Problem : Max-Min conversion(School)
//Author : PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,no,min,max,i,r,r1,r2,sum=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&no);
		min=0;
		max=0;
		i=0;
		while(no)
		{
			r=no%10;
			if(r==6)
			{
				r1=5;
				r2=6;
			}
			else if(r==5)
			{
				r2=6;
				r1=5;
			}
			else
			{
				r1=r;
				r2=r;
			}
			min+=((r1)*pow(10,i));
			max+=((r2)*pow(10,i));
			no=no/10;
			i++;
		}
		sum=min+max;
		printf("%d\n",sum);
	}
	return 0;
}
