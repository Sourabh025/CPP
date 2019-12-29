#include <iostream>

using namespace std;
class salary;
class employee{

public:
    int id;
    int getid(){
        cin>>id;
    }
    int putid(){
        cout<<id<<endl;
    }

};

class data{

public:
    string ename;
    string address;
    int age;

    void getdata(){
        cin>>ename;
        cin>>address;
        cin>>age;
    }

    void putdata(){

        cout<<ename;
        cout<<address;
        cout<<age;

    }


};

class salary : public employee{

public:
    int BS;

    void getsal(){
        cin>>BS;


    }
    void putsal(){
        cout<<BS;

    }


};

class gross:public data,public salary{

public:
    int HRA;
    int DA;
    int GS;

    void gross(){






    }







};





int main()
{

    return 0;
}
