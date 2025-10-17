#include<iostream>
using namespace std;

class Demo 
{	public:
     int x, y;

     void fun1() 
	 {
        x = 10;
        y = 20;
        cout << "I am inside member function (fun1()) in the class" << endl;
     }

     friend void add(Demo d);  
};
void add(Demo d) {  
    d.x = 10; 
    d.y = 20;
    cout << "Sum = " << d.x + d.y << endl;
}

int main() {
    Demo ob;
    add(ob);  
    return 0;
}
