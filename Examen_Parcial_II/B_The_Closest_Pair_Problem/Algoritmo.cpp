#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>

double Euclidean(const std::pair<double, double>& p1, const std::pair<double, double>& p2) {
    double dx = p1.first - p2.first;
    double dy = p1.second - p2.second;
    return std::sqrt(dx * dx + dy * dy);
}

double closestPairDistance(const std::vector<std::pair<double, double>>& points) {
    int n = points.size();
    double minDist = std::numeric_limits<double>::infinity();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double dist = Euclidean(points[i], points[j]);
            minDist = std::min(minDist, dist);
        }
    }

    return minDist;
}

int main() {
    int N;

    while (std::cin >> N && N != 0) {
        std::vector<std::pair<double,double>> points(N);

        for (int i = 0; i < N; ++i) {
            std::cin >> points[i].first >> points[i].second;
        }

        double minDistance = closestPairDistance(points);

        if (minDistance < 10000) {
            std::cout << std::fixed;
            std::cout.precision(4);
            std::cout << minDistance << std::endl;
        }
        else {
            std::cout << "INFINITY" << std::endl;
        }
    }

    return 0;
}
