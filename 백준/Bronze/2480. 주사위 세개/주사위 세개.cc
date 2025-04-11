#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num[4];
    
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    
    sort(num, num + 3);
    
    if (num[0] ==  num[2])
        cout << 10000 + num[0] * 1000;
    else if (num[0] ==  num[1] || num[1] == num[2])
        cout << 1000 + num[1] * 100;
    else 
        cout << num[2] * 100;
    
    return 0;
}