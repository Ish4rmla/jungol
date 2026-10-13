#include <iostream>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	for(int i = 0; i < n; i++) {
		if(i%2) {
			cout << "*";
			for(int j = 0; j < m-2; j++) {
				cout << " ";
			}
			cout << "*";
		}
		else {
			for(int j = 0; j < m; j++) {
				cout << "*";
			}
		}
		cout << '\n';
	}
	return 0;
}
