#include <iostream>
#include <string>

int main(void)
{
    int A, B, C;
    int R = 0;
    int num[10] = { 0 };
    
    std::cin >> A >> B >> C;
    R = A * B * C;
    
    std::string result = std::to_string(R);
    
    for (int i = 0; i < result.length(); i++) {
        num[result[i] - 48]++;   
    }
    
    for (int j = 0; j < 10; j++) {
        std::cout << num[j] << std::endl;
    }
}