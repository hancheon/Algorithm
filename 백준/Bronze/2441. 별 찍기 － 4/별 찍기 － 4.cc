#include <iostream>
#include <cassert>

int main(void)
{
    int N;
    std::cin >> N;
    assert(1 <= N && N <= 100);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int k = N - i; k > 0; k--) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}