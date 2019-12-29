#include <iostream>
#include <set>
#include <iterator>
#include <map>
using namespace std;

int main()
{

    map<int,int> s;



    s.insert(pair<int,int>(1,10));
    s.insert(pair<int,int>(1,2));
    //s.insert(10);


    map <int,greater<int>> :: iterator it;


    for(it = s.begin();it !s.end();it++){

        cout<<*it;
    }


    return 0;
}
