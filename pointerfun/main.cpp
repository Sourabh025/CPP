#include <iostream>

using namespace std;
int function();
int main()
{
   int (*p)();
   p=&function;
   int result=(*p)();
   cout<<result;
    return 0;
}


int function(){

int a=10;
int b=10;
int result=a+b;

return result;

}
