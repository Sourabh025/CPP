#include <iostream>

using namespace std;
class derived;

class base{

    public:
    int a;
    int b;
     base();


    inline void fun();

    friend void func();

    friend class derived;


};

base::base(){

    int x=10;
    int y=20;


}


class derived{

public:

int x=10;
int y=20;

friend class base;

friend void func();

void add(base obj){

    int add = obj.a+x;
    cout<<add<<endl;


}

}
;
inline void base:: fun(){

    cout<<"hello from outside function"<<endl;


}

void func(base obj,derived obj1){

    cout<<"hello from func"<<endl;
    int t=obj.a+obj1.x;
    int r=obj.b+obj1.y;
    cout<<t<<r;
}
int main()
{

    base obj;
    derived obj1;
    obj.fun();
    func(obj,obj1);
    obj1.add(obj);


    return 0;
}


