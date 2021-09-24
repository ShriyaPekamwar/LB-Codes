#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int);
int main()
{
	int ino=0;
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&ino);
	
	bRet=ChkZero(ino);
	if(bRet == true)
	{
		printf("It Contains Zero\n");
	}
	else
	{
		printf("There is no Zero\n");
	}
	return 0;
}
bool ChkZero(int ino)
{
	int iDigit = 0;
	bool bRet=false;
	if(ino<0)
	{
		ino = -ino;
	}
	while(ino!=0)
	{
		iDigit = ino%10;
		ino = ino/10;
		if(iDigit == 0)
		{
			return true;
		}
	}
	return bRet;
}
