#include <iostream>

using namespace std;


class A{
public:
int x=10;
int y=20;


void fun()
const {

cout<<"hello"<<endl;


}
}
;


class B{





};

int main()
{

    const A obj;
    obj.fun();

    cout << "Hello world!" << endl;
    return 0;
}
