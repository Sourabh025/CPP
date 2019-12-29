#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string h,t;
    cin>>h;
    cin>>t;
    int s=h.at(0);
    cout<<s;
    char data[20];

    cin.getline(data,200);

    fstream obj;

    obj.open("abc.txt",ios::out | ios::in);

    obj<<data<<endl;

    obj>>data;

    cout<<data;
    obj.close();
    return 0;
}
