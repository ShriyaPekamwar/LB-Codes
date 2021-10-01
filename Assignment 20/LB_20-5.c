#include<stdio.h>
#include<stdbool.h>
void ChkAlphabet(char ch)
{
	if(ch=='a' || ch=='A')
	{
		printf("Your exam is at 7 am");
	}
	else if(ch=='b' || ch=='B')
	{
		printf("Your exam is at 8.30 am");
	}
	else if(ch=='c' || ch=='C')
	{
		printf("Your exam is at 9.20 am");
	}
	else if(ch=='d' || ch=='D')
	{
		printf("Your exam is at 10.30 am");
	}
	else
	{
		printf("There is no such division");
	}
}

int main()
{
	char ch='\0';
	printf("Enter your division\n");
	scanf("%c",&ch);
	
	ChkAlphabet(ch);
	return 0;
}