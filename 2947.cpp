#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<vector<int>> v(n, vector<int>(3));

    for(int i = 0 ; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    for(int i = 0; i < n; i++) {
        int total = 0;

        for(int j = 0; j < 3; j++) {
            int num = v[i][j];
            bool isUnique = true;

            for(int k = 0; k < n; k++) {
                if(i == k) continue;

                if(v[k][j] == num) {
                    isUnique = false;
                    break;
                }
            }
            if(isUnique) {
                total+= num;
            }
        }
        cout << total << "\n";
    }
    return 0;
}
