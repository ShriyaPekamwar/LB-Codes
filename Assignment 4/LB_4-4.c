#include<stdio.h>
int NonFact(int);
int main()
{
	int ino = 0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&ino);
	
	iRet = NonFact(ino);
	printf("%d",iRet);
	return 0;
}
int NonFact(int ino)
{
	int iSum = 0;
	for(int i=1;i<ino;i++)
	{
		if(ino%i != 0)
		{
			iSum=iSum + i;
		}
	}
	return iSum;
}