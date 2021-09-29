#include<iostream>
using namespace std;

class Convert
{
	public:
	int Convertcase(char c)
	{
		if(c>='a' && c<='z')
		{
			return c - 32;
		}
		else if(c>='A' && c<='Z')
		{
			return c +32;
		}
	}
	
};

int main()
{
	char ch='\0';
	int cRet='\0';
	printf("Enter the character\n");
	scanf("%c",&ch);
	
	Convert obj;
	cRet=obj.Convertcase(ch);
	printf("Toggled charater is : %c",cRet);
	return 0;
}