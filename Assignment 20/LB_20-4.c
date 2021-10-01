#include<stdio.h>
#include<stdbool.h>
bool ChkAlphabet(char ch)
{
	if(ch>'a' && ch<'z')
	{
		return false;
	}
	else if(ch>'A' && ch<'Z')
	{
		return true;
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