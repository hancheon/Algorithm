#include <iostream>
#include <cassert>

int main(void)
{
    int N;
    
    std::cin >> N;
    assert(1 <= N && N <= 100);
    
    for (int i = 1; i <= N; i++) {
        for (int j = N - i; j > 0; j--) {
            std::cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    return 0;
}