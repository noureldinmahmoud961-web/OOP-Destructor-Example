#include <iostream>
using namespace std;

class student {
private:

	int a;
	int b;

public:

	void set(int x,int y) {
		a = x;
		b = y;

	}
	void display() {

		cout << "x is :" << a;
		cout << "\ny is :" << b;

	}

	~student() {

		cout << "\nI am a destructor";

	}

};

int main() {

	student ob1;
	ob1.set(10,20);
	ob1.display();

	    return 0;
}
