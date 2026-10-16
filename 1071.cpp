#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, divSum = 0, multSum = 0;
	vector<int> v;

	cin >> n;

	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;

		v.push_back(t);
	}

	int m;
	
	cin >> m;

	for(auto it : v) {
		if(m % it == 0) {
			divSum += it;
		}
		if(it % m == 0) {
			multSum += it;
		}
	}

	cout << divSum << '\n' << multSum;

	return 0;
}
