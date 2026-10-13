#include <iostream>
#include <stack>

using namespace std;

int main() {
	string str;
	stack<char> st;
	double ans; 
	int cnt = 0, mult = 1;

	cin >> str;

	for(auto c : str) {
		st.push(c);
	}

	while(!st.empty()) {
		char iter = st.top();
		st.pop();

		if(iter == 'C') {
			if(cnt == 0) {
				ans += 12.01;
			}
			else ans += 12.01 * cnt; 
			mult = 1, cnt = 0 ;
		}
		else if(iter == 'H') {
			if(cnt == 0) {
				ans += 1.008;
			}
			else ans += 1.008 * cnt; 
			mult = 1, cnt = 0 ;
		}
		else if(iter == 'O') {
			if(cnt == 0) {
				ans += 16;
			}
			else ans += 16 * cnt;
			mult = 1, cnt = 0;
		}
		else if(iter == 'N') {
			if(cnt == 0) {
				ans += 14.01;
			}
			else ans += 14.01 * cnt; 
			mult = 1, cnt = 0 ;
		}
		else {
			cnt += (iter - '0') * mult;
			mult *= 10;
		}
	}
	cout.precision(3);
	cout << fixed << ans;
	return 0;
}

//그냥 숫자 탐색을 먼저 쓰고 해시맵 썼으면 더 빨랐을듯
