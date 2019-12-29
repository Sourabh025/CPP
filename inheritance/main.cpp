#include <iostream>

using namespace std;

class A{
public:
void func(int x,int y){

    int result=x+y;
    cout<<"Result from parent class is "<<result<<endl;
}


};

class B: public A{
public:
void func(int x,int y){

    int result=x+y;
    cout<<"Result from child class is "<<result<<endl;

}


};


int main()
{

    B obj;
    obj.func(5,10); // function call from child class

    A obj1= obj; //refrencing to child class from parent class
    obj1.func(100,100);  //function call from parent class
    return 0;
}
