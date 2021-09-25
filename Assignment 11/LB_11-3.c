#include<stdio.h>
void Pattern(int,int);
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
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iRows;i++,ch++)
	{
		//char ch='A';
		for(j=1;j<=iCols;j++)
		{
			printf("%c\t",ch);
		}
		printf("\n");
	}
}