#include<stdio.h>
void NonFact(int);
int main()
{
	int ino = 0;
	printf("Enter number\n");
	scanf("%d",&ino);
	
	NonFact(ino);
	return 0;
}
void NonFact(int ino)
{
	for(int i=1;i<ino;i++)
	{
		if(ino%i != 0)
		{
			printf("%d\t",i);
		}
	}
}