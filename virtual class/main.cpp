#include <iostream>

using namespace std;


class A{
public:
int a;
int b;

void show0(){

cout<<"Class A";
}

};

class B : virtual public A {
public:
void show1(){

cout<<"Class B";
}


};

class C : virtual public A{
public:
void show2(){

cout<<"Class C";
}


};

class D : public B,public C{
public:
void show3(){

cout<<"Class D";
}

};


int main()
{
    D obj;
    obj.show0();
    //calling class a funtion from d class
    //no ambiguous after using virtual function


    return 0;
}
