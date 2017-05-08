//CODECHEF Problem: Three Way Communication (Beginner)
//Problem Code : COMM3
//Author : By PIYUSH.
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	float ax,ay,bx,by,cx,cy,ab,bc,ca,no;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f",&no);
		scanf("%f%f",&ax,&ay);
		scanf("%f%f",&bx,&by);
		scanf("%f%f",&cx,&cy);
		ab=sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
		bc=sqrt((bx-cx)*(bx-cx) + (by-cy)*(by-cy));
		ca=sqrt((cx-ax)*(cx-ax) + (cy-ay)*(cy-ay));
		if((ab<=no) && (bc<=no) && (ca<=no))
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}
