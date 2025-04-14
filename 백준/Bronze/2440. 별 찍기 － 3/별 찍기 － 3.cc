#include <iostream>
#include <cassert>

int main(void)
{
    int N;
    std::cin >> N;
    assert(1 <= N && N <= 100);
    
    for (int i = 0; i < N; i++) {
        for (int j = N - i; j > 0; j--) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    return 0;
}