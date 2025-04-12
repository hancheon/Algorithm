#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int card[21];
    for (int i = 1; i <= 20; i++)
    {
        card[i] = i;
    }
    
    int a, b;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;  
        reverse(card + a, card + b + 1);
    }
    
    for (int i = 1; i <= 20; i++)
    {
        cout << card[i] << ' ';
    }
}