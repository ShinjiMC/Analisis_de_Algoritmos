#include <iostream>
#include <vector>
#include <cmath>
//by Braulio Maldonado Casilla
using namespace std;

bool Validacion(const vector<int>& teenagers, const vector<vector<int>>& restricciones, int pos) {
    for (const auto& restriccion : restricciones) {
        int a = restriccion[0];
        int b = restriccion[1];
        int c = restriccion[2];
        int distance = abs(teenagers[a] - teenagers[b]);

        if ((c > 0 && distance > c) || (c < 0 && distance < -c)) {
            return false;
        }
    }
    return true;
}

int Backtracking_Seats(vector<int>& teenagers, const vector<vector<int>>& restricciones, int pos) {
    int n = teenagers.size();

    if (pos == n) {
        if (Validacion(teenagers, restricciones, pos - 1)) {
            return 1;
        }
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (teenagers[i] == -1) {
            teenagers[i] = pos;
            count += Backtracking_Seats(teenagers, restricciones, pos + 1);
            teenagers[i] = -1;
        }
    }
    return count;
}

int main() {
    int n, m;
    while (cin >> n >> m && (n != 0 || m != 0)) {
        vector<vector<int>> restricciones(m, vector<int>(3));
        for (int i = 0; i < m; ++i) {
            cin >> restricciones[i][0] >> restricciones[i][1] >> restricciones[i][2];
        }
        vector<int> teenagers(n, -1);
        int result = Backtracking_Seats(teenagers, restricciones, 0);
        cout << result << endl;
    }

    return 0;
}
