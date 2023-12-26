#include <iostream>

int main(void)
{
    int multiply[9];
    int N;
    
    std::cin >> N;
    
    for (int i = 1; i < 10; i++) {
        multiply[i-1] = N * i;
    }
    
    for (int j = 1; j < 10; j++) {
        std::cout << N << " * " << j << " = " << multiply[j-1] << "\n";
    }
    
    return 0;
}