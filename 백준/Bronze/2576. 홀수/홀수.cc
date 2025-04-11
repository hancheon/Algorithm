#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int input;
    int odd[7];
    int sum = 0;
    int min = 100;
    
    for (int i = 0; i < 7; i++)
    {
        cin >> input;
        if (input % 2 == 1)
        {
            sum += input;
            if (input < min)
                min = input;
        }
    }
    
    if (sum == 0)
        cout << -1;
    else
        cout << sum << '\n' << min;
}