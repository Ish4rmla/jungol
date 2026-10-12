#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, min = 1001;
    vector<int> v;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        int t;
        
        cin >> t;

        if(t < min) {
            min = t;
            v.clear();
            v.push_back(i);
        }
        else if(t == min) {
            v.push_back(i);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
