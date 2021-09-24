#include<stdio.h>
void  RangeSumEven(int,int);
int main()
{
	int iStart=0,iEnd=0;
	
	printf("Enter the starting range\n");
	scanf("%d",&iStart);
	
	printf("Enter the ending range\n");
	scanf("%d",&iEnd);
	
	 RangeSumEven(iStart,iEnd);
	return 0;
}

void  RangeSumEven(int iStart,int iEnd)
{
	int iSum=0;
	if(iStart>iEnd)
	{
		printf("Invalid range");
	}
	for(int i=iStart;i<=iEnd;i++)
	{
		if(i%2 == 0)
		{
			iSum=iSum+i;
		}
	}
	printf("%d\t",iSum);
}