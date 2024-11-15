#include <iostream>

int kol_les(int currentIndex, int remaining) {
    int answer = 0;
    if (remaining == 0) {
        return answer + 1;
    } else if (currentIndex < remaining) {
        for (int i = currentIndex + 1; i <= remaining; i++) {
            answer += kol_les(i, remaining - i);
        }
        return answer;
    } else {
        return answer;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << kol_les(0, n) << std::endl;
    return 0;
}