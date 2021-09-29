#include<iostream>
using namespace std;

class Convert
{
	public:
	int i=0;
	void RangeDisplay(int iStart,int iEnd)
	{
		for(i=iStart;i<=iEnd;i++)
		{
			printf("%d\t",i);
		}
	}
	
};

int main()
{
	int iStart=0,iEnd=0;
	printf("Enter the startting and ending range\n");
	scanf("%d%d",&iStart,&iEnd);
	
	Convert obj;
	obj.RangeDisplay(iStart,iEnd);
	
	return 0;
}