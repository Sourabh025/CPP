#include<iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
int y;
public:
void setX (int y)
{
	// The 'this' pointer is used to retrieve the object's x
	// hidden by the local variable 'x'
	this->y = y;
}
void print() { cout << "x = " << y << endl; }
};

int main()
{
Test obj;
int x = 20;
obj.setX(x);
obj.print();
return 0;
}
