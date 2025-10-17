#include<iostream>
using namespace std;
class outerclass
{
	public :
	int a,b;
	outerclass()
	{
		a=10;
		b=10;
	}
	void display()
	{
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
	}
	class innerclass
	{
		public :
		int x,y;
		void disp()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
	};
};
int main()
{
	outerclass ob;
	ob.display();
	outerclass::innerclass ob2;
	ob2.disp();
	return 0;
}
