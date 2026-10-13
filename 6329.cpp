#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector<int> v;


	cin >> n;

	for(int i = 0; i < n; i++) {
		int t;

		cin >> t;

		v.push_back(t);
	}
	
	sort(v.begin(), v.end());

	auto it = unique(v.begin(), v.end());
	v.erase(it, v.end());

	for(auto current : v) {
		if(binary_search(v.begin(), v.end(), current + 3) && binary_search(v.begin(), v.end(), current+6)) {
			cout << "Yes";
			return 0;
		}
	}

	cout << "No";

	return 0;
}
