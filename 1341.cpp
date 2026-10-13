#include <iostream>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	if(n < m) {
		for(int i = n; i <= m; i++) {
			for(int j = 1; j <= 9; j++) {
				cout << i << " * " << j << " = ";
				if(i * j < 10) {
					cout << " " << i * j;
				}
				else cout << i * j;

				if(j%3) {
					cout << "   ";
				}
				else cout << '\n';
			}
			cout << '\n';
		}
	}
	else {
		for(int i = n; i >= m; i--) {
			for(int j = 1; j <= 9; j++) {
				cout << i << " * " << j << " = ";
				if(i * j < 10) {
					cout << " " << i * j;
				}
				else cout << i * j;

				if(j%3) {
					cout << "   ";
				}
				else cout << '\n';
			}
			cout << '\n';
		}
	}
	return 0; 
}
