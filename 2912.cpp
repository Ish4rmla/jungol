#include <iostream>

using namespace std;

int main() {
	long long n, spin = 1;
	bool reverse = 0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		int a, b;
		bool c;

		cin >> a >> b >> c;

		spin = spin * b / a;

		if(c) {
			reverse = !reverse;
		}
	}

	cout << reverse << " " << spin;
	
	return 0;
}
