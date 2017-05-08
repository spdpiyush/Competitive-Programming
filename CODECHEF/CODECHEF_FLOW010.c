//CODECHEF Problem:Id and Ship.(Beginner)
//Problem Code : FLOW010
//Author : By PIYUSH.
#include<stdio.h>
#include<stdlib.h>
int disp(char []);
int main()
{
	int t,ans,i;
	char ch[2];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%s",ch);
		ans=disp(ch);
		if(ans==1)
		printf("BattleShip\n");
		else if(ans==2)
		printf("Cruiser\n");
		else if(ans==3)
		printf("Destroyer\n");
		else if(ans==4)
		printf("Frigate\n");
	}
	return 0;
}
int disp(char ch[])
{
	if(ch[0]=='B' || ch[0]=='b')
	return 1;
	else if(ch[0]=='c' || ch[0]=='C')
	return 2;
	else if(ch[0]=='D' || ch[0]=='d')
	return 3;
	else if(ch[0]=='F' || ch[0]=='f')
	return 4;
}
