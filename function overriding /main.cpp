#include <iostream>

using namespace std;


class base{

public:


    virtual int print(){

        cin>>x;
        cin>>y;

        return x+y;
    }


};

class derived:public base {
public:


    int print(){

        cin>>x;
        cin>>y;
        cin>>z;
        return x+y+z;
    }


};


int main()
{
  base obj;

  derived a;


    cout<<a.print();

  //obj=&a;
  //obj->print();          virtual call

  //a.print();        //results are not exceptions

  //obj.print();


  //base *ptr;

  //ptr=&a;

  //ptr->print();     //using pointers we get unaccepted results   //early binding






    return 0;
}
