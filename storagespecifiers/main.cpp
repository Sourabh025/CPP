#include <iostream>

using namespace std;

const int x=5;

void show();

int main()
{

static int x=10;

    cout<<x<<' ';
    x=122;
    cout<<x<<' ';
{
    register int x=12;

    cout<<x<<' ';

    cout<<x<<' ';
}

    show();

return 0;
}

void show(){

cout<<x<<' ';
}

