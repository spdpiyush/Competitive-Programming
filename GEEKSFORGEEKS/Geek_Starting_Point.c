//GeeksForGeeks Problem : Starting Point(Begineer)
//Author : PIYUSH
#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,x,y,c_x,c_y,sum_x,sum_y,i;
	scanf("%d",&t);
	while(t--)
	{
		sum_x=0;
		sum_y=0;
		scanf("%d%d",&c_x,&c_y);
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&x);
			c_x=c_x - x;
			scanf("%d",&y);
			c_y=c_y - y;
		}
		printf("%d %d\n",c_x,c_y);
	}
	return 0;
}
