#include<stdio.h>
void FactRev(int);
int main()
{
	int ino = 0;
	printf("Enter number\n");
	scanf("%d",&ino);
	
	FactRev(ino);
	
	
	return 0;
}
void FactRev(int ino)
{
	for(int i=ino;i<=ino;i--)
	{
		if(ino%i==0)
		{
			printf("%d\t",i);
		}
	}
}