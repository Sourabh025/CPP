#include <iostream>

using namespace std;

class A{

public:
int a,b;

 virtual void fun(){
    cout<<"hello from BASE"<<endl;
 };

};


class B : public A{

public:

  void fun(){

    cout<<"hello from fun virtual function"<<endl;

  }

};


int main()
{

    A *obj;
    B obj1;
    obj = &obj1;
    obj->fun();
    obj1.fun();
    A obj2;
    obj2.fun();

    return 0;
}
