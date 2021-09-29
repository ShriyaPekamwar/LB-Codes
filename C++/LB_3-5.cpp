#include<iostream>
using namespace std;

class Convert
{
	public:
	bool ChkVowel(char c)
	{
		if((c='a') || (c='e') || (c='i') || (c='o') || (c='u'))
		{
			return true;
		}
		/*else if(c='A' || 'E' || 'I' || 'O' || 'U')
		{
			return true;
		}*/
		else
		{
			return false;
		}
	}
	
};

int main()
{
	char ch='\0';
	bool bRet=false;
	printf("Enter the character\n");
	scanf("%c",&ch);
	
	Convert obj;
	obj.ChkVowel(ch);
	if(bRet = true)
	{
	    printf("It is a vowel");
	}
	else
	{
		printf("It is not a vowel");
	}
	return 0;
}