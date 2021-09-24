#include<stdio.h>
#include<stdbool.h>
int ChkVowel(char);
int main()
{
	char ch = '\0';
	bool cRet=false;
	
	printf("Enter a character\n");
	scanf("%c",&ch);
	cRet = ChkVowel(ch);
	if(cRet == true)
	{
		printf("%c is vowel\n",ch);
	}
	else
	{
		printf("%c is not vowel\n",ch);
	}
	return 0;
}
int ChkVowel(char ch)
{
	bool cRet=false;
	if(ch == 'a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u')
	{
		return true;
	}
	else if(ch == 'A' || ch == 'E' || ch=='I' || ch=='O' || ch=='U')
	{
		return true;
	}
	else
	{
		return false;
	}
	return cRet;
}
		
	