#include <iostream>

using namespace std;


class base{

public:
int i;
int j;

base(){
cout<<"base class called"<<endl;


}

~base(){

  cout<<"base Destructor called"<<endl;
}


};

class derived:public base{
public:
derived(){

 cout<<"derived constructor"<<endl;

}

~derived(){


    cout<<"derived constructor"<<endl;

}


};

int main()
{

    derived obj;





    return 0;
}
