#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
	if(ch=='!' || ch=='@' || ch=='$' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
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
	bool bRet = false;
	printf("Enter character\n");
	scanf("%c",&ch);
	
	bRet=Display(ch);
	if(bRet==true)
	{
	    printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
}