#include<stdio.h>

char Display(char ch)
{
	if(ch>'a' && ch<'z')
	{
		return ch-32;
	}
	else if(ch>'A' && ch<'Z')
	{
		return ch+32;
	}
}

int main()
{
	char ch='\0';
	char cRet = '\0';
	printf("Enter character\n");
	scanf("%c",&ch);
	
	cRet=Display(ch);
	printf("Toggled letter is : %c",cRet);
	return 0;
}