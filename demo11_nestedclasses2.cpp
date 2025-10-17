// Demo on Nested class in CPP
#include<iostream>
using namespace std;
class OuterClass
{
	public:
	int a,b;
	OuterClass()
	{
		a=10;
		b=20;
	}
	void disp()
	{
		cout<<"\na="<<a<<"\nb="<<b;
		InnerClass ibb;
		ibb.disp();
	}
	class InnerClass
	{
		public:
		int x ,y;
		int static p;
		InnerClass()
		{
			x=100;
			y=200;
		}
		void disp()
		{
			cout<<"\nx="<<x<<"\ny="<<y;
			OuterClass obb;
			//obb.disp();
			
		}
	};
};

int main()
{
	OuterClass ob;
	ob.disp();
	OuterClass::InnerClass ib;
	ib.disp();
}