#include<stdio.h>
void Pattern(int,int);
int main()
{
	int iRow=0,iCol=0;
	printf("Enter the no of rows and columns\n");
	scanf("%d%d",&iRow,&iCol);
	
	Pattern(iRow,iCol);
	return 0;
}
void Pattern(int iRow,int iCol)
{
	for(int i=1;i<=iRow;i++)
	{
		for(int j=iCol;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}