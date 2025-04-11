#include <iostream>
#include <string>
using namespace std;

string resStr = "DCBAE";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int input;
    int result;
    
    for (int i = 0; i < 3; i++)
    {
        result = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> input;
            result += input;
        }
        cout << resStr[result] << '\n';
    }
    
    return 0;
}