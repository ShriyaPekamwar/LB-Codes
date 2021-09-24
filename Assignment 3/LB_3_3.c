#include<stdio.h>

void EvenFactors(int);

int main()
{
	int ino = 0;
	printf("Enter a number\n");
	scanf("%d",&ino);
	
	EvenFactors(ino);
	
	return 0;
}
void EvenFactors(int ino)
{
	if(ino<0)
	{
		ino = -ino;
	}
	if(ino == 0)
	{
		return;
	}
	for(int i=1;i<ino;i++)
	{
		if(ino%i == 0 && i%2 == 0)
	   {
		printf("%d\t",i);
	   }
	} 
}