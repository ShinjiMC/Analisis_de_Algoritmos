#include <iostream>
#include <algorithm>
#include <vector>

const int maxN = 100000 + 5;

struct Edge {
    int left, right;
};

bool cmp(const Edge& x, const Edge& y) {
    return x.left < y.left;
}

int main() {
    int testN = 0;
    int testM = 0;
    int intervalNum = 0;
    std::vector<Edge> interval(maxN);
    int ansList[maxN];
    std::cin >> testN;

    while (testN--) {
        std::cin >> testM;
        intervalNum = 0;
        int tmpX, tmpY;

        while (std::cin >> tmpX >> tmpY) {
            if (!tmpX && !tmpY)
                break;

            interval[intervalNum].left = tmpX;
            interval[intervalNum++].right = tmpY;
        }

        std::sort(interval.begin(), interval.begin() + intervalNum, cmp);

        int cover = 0, cur = 0, nextCover, nextCoverNum=0, i, ans = 0;
        bool covered = false;

        while (cur < intervalNum) {
            nextCover = cover;
            i = cur;

            while (i < intervalNum && interval[i].left <= cover) {
                if (interval[i].right > nextCover) {
                    nextCover = interval[i].right;
                    nextCoverNum = i;
                }
                ++i;
            }

            if (i == cur)
                break;

            cover = nextCover;
            ansList[ans++] = nextCoverNum;
            cur = i;

            if (cover >= testM) {
                covered = true;
                break;
            }
        }

        if (covered) {
            std::cout << ans << std::endl;

            for (int j = 0; j < ans; ++j) {
                std::cout << interval[ansList[j]].left << " " << interval[ansList[j]].right << std::endl;
            }
        }
        else {
            std::cout << "0" << std::endl;
        }

        if (testN > 0)
            std::cout << std::endl;
    }

    return 0;
}
