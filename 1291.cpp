#include <iostream>

using namespace std;

int main() {
	int n, m;
	while(1) {
		cin >> n >> m;
		if((n < 2 || m > 9) || (n > 9 || m < 2)) {
			cout << "INPUT ERROR!\n";
			continue;
		}
		if(n < m) {
			for(int j = 1; j <= 9; j++) {
				for(int i = n; i <= m; i++) {
					cout << i << " * " << j << " = "; 
					if(i * j < 10) {
						cout << " ";
					}
					cout << i * j;
					cout << "   ";
				}
				cout << '\n';
			}
		}
		else {
			for(int j = 1; j <= 9; j++) {
				for(int i = n; i >= m; i--) {
					cout << i << " * " << j << " = "; 
					if(i * j < 10) {
						cout << " ";
					}
					cout << i * j;
					cout << "   ";
				}
				cout << '\n';
			}
		}
		break;
	}
	return 0;
}
