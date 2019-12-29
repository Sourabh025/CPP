// CPP program to illustrate
// Function Overriding
#include<iostream>
using namespace std;
class A{
public:


    A(){

        cout<<"Base class constructor "<<endl;

    }

  virtual ~A(){

    cout<<"base class de distructor"<<endl;

  }




};
// Driver code
class B:public A{
public:
 B(){

cout<<"constructor from derived called"<<endl;

 }

~B(){



    cout<<" desconstructor of derieved class"<<endl;

}


};



int main()
{
	B obj;


	}
