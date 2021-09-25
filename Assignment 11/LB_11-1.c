#include<stdio.h>
void Pattern(int,int);
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the values of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}

void Pattern(int iRows,int iCols)
{
	//char ch='A';
	for(int i=0;i<iCols;i++)
	{
		for(int j=0,ch='A';j<iRows;j++,ch++)
		{
			printf("%c\t",ch);
		}
	  printf("\n");
	}
}