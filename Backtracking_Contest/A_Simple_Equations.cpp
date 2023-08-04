#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
//by Braulio Maldonado Casilla
using namespace std;
bool Ecuacion(int A, int B, int C, vector<int>& ans) {
    for (int x = -22; x <= 22; x++) {
        for (int y = -10000; y <= 10000; y++) {
            int z = A - x - y;
            if (x != y && x != z && y != z && (x * y * z) == B && ((x * x) + (y * y) + (z * z)) == C) {
                ans = { x, y, z };
                return true;
            }
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        vector<int> ans;
        if (Ecuacion(A, B, C, ans)) {
            sort(ans.begin(), ans.end());
            cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
        }
        else {
            cout << "No solution." << endl;
        }
    }

    return 0;
}
