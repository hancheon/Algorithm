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
            for (int j = 0; j < i; j++)
            {
                cout << '*';
            }
        
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << ' ';
            }
        
            for (int j = 0; j < i; j++)
            {
                cout << '*';
            }
        }
        else
        {
            for (int j = 0; j < 2 * N - i; j++)
            {
                cout << '*';
            }      
                
            for (int j = 0; j < 2 * (i - N); j++)
            {
                cout << ' ';
            }
            
            for (int j = 0; j < 2 * N - i; j++)
            {
                cout << '*';
            }   
        }
        cout << '\n';
    }
    
    return 0;
}