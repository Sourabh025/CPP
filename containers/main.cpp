#include <iostream>
#include<list>
#include <algorithm>
#include <iterator>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    stack<int> s;
    list<int> l;
    queue<int> q;
    priority_queue<int> pq;

    l.push_back(10);

    s.push(10);
    s.push(20);
    s.push(5);
    s.pop();


    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();


    pq.push(20);
    pq.push(2);
    cout<<endl<<q.front();

    while(!q.empty()){

        cout<<q.front()<<"      ";
        q.pop();


    }
//    stack <int> :: iterator st;

    while(!s.empty()){

        cout<<s.top();
        s.pop();

    }



    return 0;
}
