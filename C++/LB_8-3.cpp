#include<iostream>
using namespace std;

class Convert
{
	public:
	int i=0,iSum=0;
	void RangeSum(int iStart,int iEnd)
	{
		for(i=iStart;i<=iEnd;i++)
		{
			iSum=iSum+i;
		}
		printf("%d\t",iSum);
	}
	
};

int main()
{
	int iStart=0,iEnd=0;
	printf("Enter the startting and ending range\n");
	scanf("%d%d",&iStart,&iEnd);
	
	Convert obj;
	obj.RangeSum(iStart,iEnd);
	
	return 0;
}