#include<stdio.h>
void RangeDisplayRev(int,int);
int main()
{
	int iStart=0,iEnd=0;
	
	printf("Enter the starting range\n");
	scanf("%d",&iStart);
	
	printf("Enter the ending range\n");
	scanf("%d",&iEnd);
	
	RangeDisplayRev(iStart,iEnd);
	return 0;
}

void RangeDisplayRev(int iStart,int iEnd)
{
	if(iStart>iEnd)
	{
		printf("Invalid range");
	}
	for(int i=iEnd;i>=iStart;i--)
	{
		printf("%d\t",i);
	}
}