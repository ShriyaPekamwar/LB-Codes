#include<stdio.h>

void Display(char ch)
{
	int i=0;
	printf("Decimal \t %d\n Hexadecimal \t %x\n Octal\t %o\n",ch,ch,ch);
}
int main()
{
	char ch='\0';
	printf("Enter character\n");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}