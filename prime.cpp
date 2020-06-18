#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int limit;
	cout<<"Enter limit: ";
	cin>>limit;
	cout<<"Prime number series: ";
	for(int x=1;x<=limit;x++)
	{
		bool val=true;
		if(x>3)
		{
			for(int y=2;y<=((x/2)+1);y++)
			{
				if(x%y==0)
				{
					val=false;
					break;
				}
			}
		}
		if(val)
		{
			cout<<x<<",";
		}
	}
	getch();
	return 0;
}
