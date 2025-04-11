#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sum = 0;
    int height[10];
    
    for (int i = 0; i < 9; i++)
    {
        cin >> height[i];
        sum += height[i];
    }
    
    int rest = sum - 100;
    bool find = false;
    
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 9; j++)
        {
            if (height[i] + height[j] == rest)
            {
                height[i] = 0;
                height[j] = 0;
                find = true;
                break;
            }
        }
        if (find)
            break;
    }
    
    sort(height, height + 9);
    
    for (int i = 2; i < 9; i++)
    {
        cout << height[i] << '\n';
    }
    
    return 0;
}