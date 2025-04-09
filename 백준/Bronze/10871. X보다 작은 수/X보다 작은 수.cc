#include <iostream>
#include <vector>

int main()
{
    int N;
    int X;
    int temp;
    std::vector<int> large;
    
    std::cin >> N >> X;
    
    for (int cnt = 0; cnt < N; cnt++)
    {
        std::cin >> temp;
        if (temp < X)
            large.push_back(temp);
    }
    
    for (int cnt = 0; cnt < large.size(); cnt++)
    {
        std::cout << large[cnt] << " ";
    }
}