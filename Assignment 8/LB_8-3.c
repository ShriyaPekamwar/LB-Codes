#include<stdio.h>
void RangeSum(int,int);
int main()
{
	int iStart=0,iEnd=0;
	
	printf("Enter the starting range\n");
	scanf("%d",&iStart);
	
	printf("Enter the ending range\n");
	scanf("%d",&iEnd);
	
	RangeSum(iStart,iEnd);
	return 0;
}

void RangeSum(int iStart,int iEnd)
{
	int iSum=0;
	if(iStart>iEnd)
	{
		printf("Invalid range");
	}
	for(int i=iStart;i<=iEnd;i++)
	{
		iSum=iSum+i;
	}
	printf("%d\t",iSum);
}