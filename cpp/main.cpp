


#include <iostream>

#define hello() cout<<"hello from macro function "
using namespace std;

inline void hello1(){


    cout<< "hello from inline funtion";

}


class base{

protected:

int x;
int y;


    friend void fun();






};

void fun(){

cout<< "hello from friend function"<<endl;


}

void pointer(){
int x=10;
int *ptr=&x;

int y=20;

int *ptr2=&y;

cout<< *ptr + *ptr2;

}

void storage_specifier(){

int x;
register int y;
static int z;

extern int q;


{

//register *ptr=&y;


}

{

    y=12;

}


cout<<sizeof(int) <<endl;
cout<<sizeof(float)<<endl;
cout<<sizeof(double)<<endl;
cout<<sizeof(char)<<endl;
cout<<sizeof(long)<<endl;
cout<<sizeof(long long)<<endl;

}



class A{

protected:
 int a,b;

public:






};

class B :public A{

    A(){

    int a=10;
    int b=100;


 }





}





int main(){

A obj1;
obj1.disp();



hello();

hello1();

base obj;

fun();

pointer();
storage_specifier();
return 0;
}

