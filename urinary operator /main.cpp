#include <iostream>

using namespace std;

class A{
public:

int a=10,b=20;

void operator ++(int){  //works with int as well


    ++a;
    ++b;

}

void operator --(){


    --a;
    --b;
}
void show(){


    cout<<a<<" ";
    cout<<b<<" ";

}



};



int main()
{

    A obj;
    ++obj.b;
    obj.show();
    --obj.a;
    obj.show();



    return 0;
}
