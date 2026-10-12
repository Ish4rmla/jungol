#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string str;

        cin >> str;

        if(str == "merci") {
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}
