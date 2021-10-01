#include<stdio.h>
#include<stdbool.h>
bool ChkAlphabet(char ch)
{
	if(ch>='0' && ch<='9')
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
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
}