#include <iostream>
#include <cassert>
#define MAX 100

int main(void)
{
    int num1, num2;
    int div1[MAX] = {0};
    int div2[MAX] = {0};
    int count1 = 0;
    int count2 = 0;
    int max_div = 0;
    int min_mul = 0;
    
    std::cin >> num1;
    std::cin >> num2;
    assert(1 <= num1 && num1 <= 10000);
    assert(1 <= num2 && num2 <= 10000);
    
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            div1[count1] = i;
            count1++;
        }
    }
    
    for (int j = 1; j <= num2; j++) {
        if (num2 % j == 0) {
            div2[count2] = j;
            count2++;
        }
    }
    
    for (int k = 0; k < count1; k++) {
        for (int q = 0; q < count2; q++) {
            if (div1[k] == div2[q]) {
                max_div = div1[k];
            }
        }
    }
    
    min_mul = num1 * num2 / max_div;
    
    std::cout << max_div << '\n';
    std::cout << min_mul;
    
    return 0; 
}