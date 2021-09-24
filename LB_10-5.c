#include<stdio.h>
void Pattern(int,int);
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}
void Pattern(int iRow,int iCol)
{
	for(int i=1;i<=iCol;i++)
	{
		for(int j=1;j<=iRow;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}