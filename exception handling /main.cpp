
#include<iostream>
using namespace std;

class Base {

public:


Base(){
cout<<"constructor"<<endl; }

~Base(){


    cout<<"deconstructor"<<endl;

}
};
class Derived: public Base {};
int main()
{
   Derived d;
   // some other stuff
   try {
       // Some monitored code
       throw d;
   }
   catch(Base d) {
        cout<<"Caught Base Exception"<<endl;
   }

   return 0;
}
