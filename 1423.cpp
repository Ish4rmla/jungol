#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	int c = ++a + b--;

	cout << "a = " << a << ", b = " << b << ", c = " << c;

	return 0;
}
