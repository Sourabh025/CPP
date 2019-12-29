#include <iostream>

using namespace std;


class A{
 public:
 int x;
 float y;
 int z;
A(int i, float j){
     x=i;
     y=j;
}
A(int i,int j){
    x=i;
    z=j;

}

};


int main()
{

A obj(10,10);
A obj1(10,10.1);


 return 0;
}
