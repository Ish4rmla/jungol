#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	long long dp = 2;

	cin >> n;

	for(int i = 0; i < n; i++) {
		dp = 2 * dp - 1;
	}

	cout << dp * dp;

	return 0;
} 
