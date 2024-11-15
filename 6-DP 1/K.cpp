#include <iostream>
#include <vector>

int main() {
    int numberOfTerms;
    std::cin >> numberOfTerms;

    std::vector<int> sequence(40, 0);
    sequence[1] = 2;
    sequence[2] = 4;
    sequence[3] = 7;

    int index = 4;
    while (index <= numberOfTerms) {
        sequence[index] = (sequence[index - 1] + sequence[index - 2] + sequence[index - 3]);
        index++;
    }

    std::cout << sequence[numberOfTerms] << std::endl;

    return 0;
}