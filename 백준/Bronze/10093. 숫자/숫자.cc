#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long A, B, cnt;
    cin >> A >> B;
    
    if (A == B)
        cnt = 0;
    else
        cnt = abs(B - A) - 1;
    
    cout << cnt << '\n';
    
    if (A < B)
    {
        for (int i = 1; i <= cnt; i++)
        {
            cout << A + i << ' ';
        }
    }
    else if (A > B)
    {
        for (int i = 1; i <= cnt; i++)
        {
            cout << B + i << ' ';
        }
    }
    
    return 0;
}