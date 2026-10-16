#include <iostream>

using namespace std;

int main() {
	int arr[10] = {};
	int a, b, c;

	cin >> a >> b >> c;

	int mult = a * b * c;

	while(mult > 0) {
		arr[mult%10]++;
		mult /= 10;
	}

	for(int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
	
	return 0;
}
