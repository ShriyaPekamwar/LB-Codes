#include<stdio.h>
#include<stdbool.h>

bool Display(int);
int main()
{
	int no = 0;
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&no);
	
	bRet = Display(no);
	if(bRet == true)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
	return 0;
}

bool Display(int no)
{
	bool iRet = false;
	if(no<10)
	{
		return true;
	}
	else
	{
		return false;
	}
	return iRet;
}