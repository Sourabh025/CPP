#include <iostream>

using namespace std;

class A{
public:
    int a=0;

    void operator ++(){

        ++a;
       // ++b;

    }

    void show(){
        cout<<a<<'  ';
        //cout<<a<<'  ';

    }
};

int main()
{
    A obj;
    ++obj;
    obj.show();

    return 0;
}
