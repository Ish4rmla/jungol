#include <iostream>

using namespace std;

int main() {
	int n, m, k;
	
	cin >> n >> m >> k;

    int idx = (m - 1) % (n - k + 1);
	for (int i = n - k + 2; i <= n; i++) {
        idx = (idx + m) % i;
    }

	cout << idx + 1;
}
