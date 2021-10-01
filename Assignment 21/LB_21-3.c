#include<stdio.h>

void Display(char ch)
{
	int i=0;
	if(ch>'A' && ch<'Z')
	{
		for(i=ch;i<='Z';i++)
		{
			printf("%c\t",i);
		}
	}
	else if(ch>'a' && ch<'z')
	{
		for(i=ch;i>='a';i--)
		{
			printf("%c\t",i);
		}
	}
}

int main()
{
	char ch='\0';
	char cRet = '\0';
	printf("Enter character\n");
	scanf("%c",&ch);
	
	Display(ch);
	return 0;
}