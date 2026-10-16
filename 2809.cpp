#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long  n;
	vector<long long> v;

	cin >> n;

	for(long long i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			v.push_back(i);
			if(i*i != n) {
				v.push_back(n/i);
			}
		}
	}

	sort(v.begin(), v.end());

	for(long long it : v) {
		cout << it << ' ';
	}
	
	return 0;
} 
