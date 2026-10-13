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
			for(int i = n; i <= m; i++) {
				for(int j = 1; j <= 9; j++) {
					cout << i << " * " << j << " = " << i * j << '\n';
				}
				cout << '\n';
			}
		}
		else {
			for(int i = n; i >= m; i--) {
				for(int j = 1; j <= 9; j++) {
					cout << i << " * " << j << " = " << i * j << '\n';
				}
				cout << '\n';
			}
		}
		break;
	}
	return 0;
}

// clamp 함수를 사용해도 좋았을듯
