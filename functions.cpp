#include <iostream>
using namespace std;

int addOne(int value) {
	static int result = value;
	return ++result;
}

int main() {
	int a = 5;
	cout << addOne(a) << endl;
	cout << a << endl;
	cout << addOne(9) << endl;
	cout << a << endl;
	return 0;
}
