#include<stdio.h>

void Display()
{
	//char ch='\0';
	int i=0;
	printf("Decimal \t Hexadecimal \t Octal\n");
	for(int i=0;i<=127;i++)
	{
	    
	    printf("%d \t %x \t %o \n",i,i,i);
	}
	
	
}
int main()
{
	Display();
	return 0;
}