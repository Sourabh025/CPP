
#include <iostream>

using namespace std;



template <class c>
class myclass{

public:
c a;
c b;

    template <class c>
    add(c a,c b);



};



template <class c>

 myclass<c>::add(c x,c y){

    return x+y;

}


int main()
{

    myclass<int> add();
    cout << "Hello world!" << endl;
    return 0;

}
