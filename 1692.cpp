#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	int c = b;

	while(c > 0) {
		cout << c % 10 * a << "\n";
		c /= 10;
	}

	cout << a * b;

	return 0;
}
