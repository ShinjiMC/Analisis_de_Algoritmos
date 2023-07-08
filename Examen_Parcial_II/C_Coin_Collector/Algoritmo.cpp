#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::vector<long long> arr(N);
        for (int i = 0; i < N; i++) {
            std::cin >> arr[i];
        }
        long long max = arr[0];
        int coin = 1;
        for (int i = 1; i < N - 1; i++) {
            if (max + arr[i] < arr[i + 1]) {
                max += arr[i];
                coin++;
            }
        }
        coin++;
        std::cout << coin << std::endl;
    }
    return 0;
}
