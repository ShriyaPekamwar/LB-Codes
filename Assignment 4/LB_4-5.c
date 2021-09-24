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
	int iSumFact=0,iSumNFact=0;
	for(int i=1;i<ino;i++)
	{
		if(ino%i != 0)
		{
			iSumNFact=iSumNFact + i;
		}
		if(ino%i == 0)
		{
			iSumFact=iSumFact + i;
		}
	}
	return iSumFact - iSumNFact;
}