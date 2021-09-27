#include<stdio.h>
void Pattern();
int main()
{
	int ino1=0,ino2=0;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&ino1,&ino2);
	
	Pattern(ino1,ino2);
	return 0;
}

void Pattern(int iRows,int iCols)
{
	for(int i=1;i<=iRows;i++)
	{
		for(int j=1;j<=iCols;j++)
		{
			if(i>=j)
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}