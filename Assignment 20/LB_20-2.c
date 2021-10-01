#include<stdio.h>
#include<stdbool.h>
bool ChkAlphabet(char ch)
{
	if(ch>'A' && ch<'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char ch='\0';
	bool cRet = false;
	printf("Enter chracter\n");
	scanf("%c",&ch);
	
	cRet=ChkAlphabet(ch);
	if(cRet == true)
	{
		printf("It is capital");
	}
	else
	{
		printf("It is not capital");
	}
	return 0;
}