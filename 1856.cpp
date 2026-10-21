#include <iostream>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;
	
	int cnt;

	for(int i = 1; i <= n; i++) {
		if(i % 2) {
			cnt = m*(i-1)+1;
			for(int j = 0; j < m; j++) {
				cout << cnt << " ";
				cnt++;
			}
		}
		else {
			cnt = i*m;
			for(int j = 0; j < m; j++) {
				cout << cnt << " ";
				cnt--;
			}
		}
		cout << "\n";
	}
	return 0;
}
