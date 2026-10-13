#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string str;
	deque<char> dq;
	int cross = 0;

	cin >> str;

	for(auto c : str) {
		auto it = find(dq.begin(), dq.end(), c);

		if (it == dq.end()) {
			dq.push_back(c);
		}
		else {
			cross += (dq.end() - it - 1);
			dq.erase(it);
		}
	}

	cout << cross;

	return 0;
}
