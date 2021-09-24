#include<stdio.h>
int MultFact(int);
int main()
{
	int ino = 0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&ino);
	
	iRet=MultFact(ino);
	printf("%d",iRet);
	
	return 0;
}
int MultFact(int ino)
{
	int iMult = 1;
	for(int i=1;i<ino;i++)
	{
		if(ino%i == 0)
		{
			iMult = iMult*i;
		}
	}
	return iMult;
}