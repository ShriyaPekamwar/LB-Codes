#include<stdio.h>
void DisplayReverse(int);
int main()
{
	int ino=0;
	printf("Enter number\n");
	scanf("%d",&ino);
	
	DisplayReverse(ino);
	return 0;
}
void DisplayReverse(int ino)
{
	int iDigit = 0;
	if(ino<0)
	{
		ino = -ino;
	}
	while(ino!=0)
	{
		iDigit = ino%10;
		printf("%d\n",iDigit);
		ino = ino/10;
	}
}