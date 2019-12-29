#include <iostream>

using namespace std;


class A{
int x,y;

public:

void show(int x, int y){

    this->x=x;
    this->y=y;
    //no use of this pointer in newer version of cpp
    //this works even without this pointer
   cout<<x<<' '<<y<<endl;
}


};


int main()
{

  A obj;
  obj.show(5,7);


  return 0;
}
