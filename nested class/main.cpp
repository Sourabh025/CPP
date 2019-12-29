#include<iostream>
using namespace std;

class Test {
	int value;
public:
	Test(int v = 0) {value = v;}

	// We get compiler error if we add a line like "value = 100;"
	// in this function.
	int getValue() const {return value;}
};

int main() {
	Test t(20);
	Test t(10);
	cout<<t.getValue();
    cout<<t1.getValue();

	return 0;
}
