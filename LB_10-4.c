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
	for(int i=1;i<=iCol;i++)
	{
		for(int j=1;j<iRow;j++)
		{
			printf("*\t");
			printf("#\t");	
		}
		printf("\n");
	}
}