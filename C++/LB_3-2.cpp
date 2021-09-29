#include<iostream>
using namespace std;

class Display
{
	public:
	int i=0;
	void EvenFactors(int ino)
	{
		for(i=1;i<ino;i++)
		{
		   if((ino%i==0) && (i%2==0))
		   {
			  printf("%d\t",i);
		   }
		}
	}
};

int main()
{
	int ino=0;
	printf("Enter the number\n");
	scanf("%d",&ino);
	
	Display obj;
	obj.EvenFactors(ino);
	return 0;
}