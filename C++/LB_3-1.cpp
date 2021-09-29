#include<iostream>
using namespace std;

class Printeven
{
	public:
	int iCnt=0,i=1;

	void Displayeven(int ino)
	{
		while(iCnt != ino)
		{
			if(i%2 == 0)
			{
				printf("%d\t",i);
				iCnt++;
	        }
			i++;
		}
	}
};
int main()
{
	int ino=0;
	printf("Enter the number\n");
	scanf("%d",&ino);
	
	Printeven obj;
	obj.Displayeven(ino);
	return 0;
}