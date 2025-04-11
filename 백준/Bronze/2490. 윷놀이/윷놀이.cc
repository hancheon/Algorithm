#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int temp;
    int result[3] = { 0 };
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> temp;
            result[i] += temp;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        switch (result[i])
        {
            case 0:
                cout << 'D';
                break;
            case 1:
                cout << 'C';
                break;
            case 2:
                cout << 'B';
                break;
            case 3:
                cout << 'A';
                break;
            case 4:
                cout << 'E';
                break;
        }
        cout << '\n';
    }
    
    return 0;
}