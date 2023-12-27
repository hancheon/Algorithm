#include <iostream>
#include <cassert>

int main(void)
{
    int N;
    int sum = 0;
    
    std::cin >> N;
    assert(1 <= N && N <= 10000);
    
    for (int i = 1; i <= N; i++) {
        sum = sum + i;
    }
    
    std::cout << sum;
    
    return 0;
}