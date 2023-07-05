#include <iostream>
#include <vector>
#include <algorithm>

void scheduleTasks(const std::vector<int>& b, const std::vector<int>& d) {
    int n = b.size();
    std::vector<std::pair<int, std::pair<int, int>>> tareas;

    for (int i = 0; i < n; i++) {
        tareas.push_back(std::make_pair(i + 1, std::make_pair(b[i], d[i])));
    }

    std::sort(tareas.begin(), tareas.end(), [](const std::pair<int, std::pair<int, int>>& a, const std::pair<int, std::pair<int, int>>& b) {
        if (a.second.first != b.second.first) {
            return a.second.first > b.second.first;
        }
        else {
            return a.first < b.first;
        }
        });

    std::vector<std::pair<int, std::pair<int, int>>> solucion;
    std::vector<bool> disponibilidad(n, true);

    for (const std::pair<int, std::pair<int, int>>& data : tareas) {
        int p = data.second.second;

        for (int i = std::min(n, p) - 1; i >= 0; i--) {
            if (disponibilidad[i]) {
                solucion.push_back(std::make_pair(data.first, std::make_pair(data.second.first, i + 1)));
                disponibilidad[i] = false;
                break;
            }
        }
    }

    std::sort(solucion.begin(), solucion.end(), [](const std::pair<int, std::pair<int, int>>& a, const std::pair<int, std::pair<int, int>>& b) {
        return a.second.second < b.second.second;
        });

    std::cout << "Solucion Optima: " << std::endl;
    for (const std::pair<int, std::pair<int, int>>& task : solucion) {
        std::cout << task.first << " - " << task.second.first << " (Plazo: " << task.second.second << " dias)" << std::endl;
    }
}

int main() {
    std::vector<int> b = { 20, 15, 10, 7, 5, 3 };
    std::vector<int> d = { 3, 1, 1, 3, 1, 3 };
    scheduleTasks(b, d);
    return 0;
}
