#include <iostream>

using namespace std;

int main() {
	int n, m, cnt;

	cin >> n;

	for(int i = 1; i <= n; i++) {
		cnt = i;
		for(int j = 0; j < n; j++) {
			cout << cnt << " ";
			cnt += n;
		}
		cout << "\n";
	}
	return 0;
}
