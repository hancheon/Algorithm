//유클리드 호제법 사용
#include <iostream>
#include <cassert>
#define MAX 100

int gcd(int a, int b)
{
    int c = a % b;
    
    while(c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main(void)
{
    int num1, num2;
    int max_div = 0;
    int min_mul = 0;
    
    std::cin >> num1;
    std::cin >> num2;
    assert(1 <= num1 && num1 <= 10000);
    assert(1 <= num2 && num2 <= 10000);
    
    max_div = gcd(num1, num2);
    min_mul = num1 * num2 / max_div;
    
    std::cout << max_div << '\n';
    std::cout << min_mul;
    
    return 0; 
}