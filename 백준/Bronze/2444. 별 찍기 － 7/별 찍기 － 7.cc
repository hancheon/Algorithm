#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        if (i <= N)
        {
            for (int j = N - i; j > 0; j--)
            {
                cout << ' ';
            }
            
            for (int j = 1; j < 2 * i; j++)
            {
                cout << '*';
            }
            
            cout << '\n';
        }
        else
        {
            for (int j = 0; j < i - N; j++)
            {
                cout << ' ';
            }
            
            for (int j = 0; j < 4 * N - 2 * i - 1; j++)
            {
                cout << '*';
            }
            
            cout << '\n';
        }
    }
    
    return 0;
}