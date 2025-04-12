#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int card[20];
    for (int i = 0; i < 20; i++)
    {
        card[i] = i + 1;
    }
    
    int a, b;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        
        if (a == b)
            continue;
        
        for (int i = 0; i < (b - a + 1) / 2; i++)
        {
            int temp = card[a + i - 1];
            card[a + i - 1] = card[b - i - 1];
            card[b - i - 1] = temp;
        }
    }
    
    for (int i = 0; i < 20; i++)
    {
        cout << card[i] << ' ';
    }
}