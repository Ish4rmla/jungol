#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int n;

	map<int, int> m;

	cin >> n;

	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		m[t]++;
	}

	for(auto& [key, value] : m) {
		cout << key << " : " << value << '\n';
	}
	return 0;
}
