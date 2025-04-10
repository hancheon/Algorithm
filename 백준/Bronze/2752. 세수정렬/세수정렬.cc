#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num[3];
    
    for (int cnt = 0; cnt < 3; cnt++)
    {
        cin >> num[cnt];
    }
    
    sort(num, num+3);
    
    for (int cnt = 0; cnt < 3; cnt++)
        cout << num[cnt] << " ";
}