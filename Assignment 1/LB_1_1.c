#include<stdio.h>

int Divide(int,int);

int main()
{
	int no1,no2;
	int iAns;
	printf("Enter numbers\n");
	scanf("%d%d",&no1,&no2);
	
	iAns = Divide(no1,no2);
	printf("division is:%d",iAns);
	
	return 0;
}
 int Divide(int a,int b)
 {
	 int iRet=0;
	 if(b>a)
	 {
		 return -1;
	 }
	 iRet=a/b;
	 return iRet;
 }