#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{

    vector <int> v;

    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    v.push_back(10);

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<"  ";

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<endl<<v[i]<<"  ";


    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
        cout<<endl<<v[i]<<"  ";

    int n=binary_search(v.begin(),v.end(),10);
    int t=count(v.begin(),v.end(),10);
            cout<<endl<<t;


    v.pop_back();




vector <int> :: iterator itr;

for(itr =v.begin();itr<v.end();++itr){

    cout<<endl<<endl<<*itr<<" ";

}

v.erase(1);
/* for(int i=0;i<v.size();i++)
        cout<<endl<<v[i]<<"  ";
*/
    return 0;
}
