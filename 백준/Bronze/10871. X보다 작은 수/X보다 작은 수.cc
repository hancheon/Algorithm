#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);
    
    int N;
    int X;
    int temp;
    
    std::cin >> N >> X;
    
    for (int cnt = 0; cnt < N; cnt++)
    {
        std::cin >> temp;
        if (temp < X)
            std::cout << temp << ' ';
    }
    
    return 0;
}