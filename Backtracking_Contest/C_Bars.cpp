#include <iostream>
#include <vector>
//by Braulio Maldonado Casilla
using namespace std;
bool BackTracking(int n, const vector<int>& bars, int ind, int tam) {
    if (tam == n) {
        return true;
    }
    if (n < tam || bars.size() <= ind) {
        return false;
    }
    if (BackTracking(n,bars, ind + 1, tam + bars[ind])) {
        return true;
    }
    if (BackTracking(n,bars, ind + 1, tam)) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, p;
        cin >> n >> p;
        vector<int> bars(p);
        for (int j = 0; j < p; ++j) {
            cin >> bars[j];
        }
        if (BackTracking(n,bars, 0, 0)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
