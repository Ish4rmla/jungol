#include <iostream>

using namespace std;

int main() {
	string name;
	int people = 0;
	for(int i = 0; i < 7; i++) {
		string str;
		int n;

		cin >> str >> n;

		if(n > people) {
			people = n;
			name = str;
		}
	}

	cout << name;
	
	return 0;
}
