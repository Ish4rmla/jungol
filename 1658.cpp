#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	int c = a, d = b;
	if(c > d) {
		while(d != 0) {
			int t = c;
			c = d;
			d = t % d;
		}
		cout << c << '\n' << a * b / c;
	}
	else {
		while(c != 0) {
			int t = d;
			d = c;
			c = t % c;
		}
		cout << d << '\n' << a * b / d;
	}

	return 0;
}
