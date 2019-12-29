#include <iostream>

using namespace std;


class A{

public:

int x,y;

string name;
int marks;



void getname(){

    getline(cin,name);

}
void getmarks(){

cin>>marks;

}
void display(){

    cout<<name;
    cout<<marks;

}






};


class B:public A{




};


int main()
{
        B obj[2];


        for(int i=0;i<2;i++){

            obj[i].getname();
            obj[i].getmarks();

            obj[i].display();
        }




    return 0;
}
