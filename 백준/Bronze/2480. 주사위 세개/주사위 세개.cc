#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num[4];
    int cnt = 0;
    
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    
    sort(num, num + 3);
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (num[i] == num[j])
            {
                num[3] = num[i];
                cnt++;
                break;
            }
        }
    }
    
    if (cnt == 2)
    {
        cout << 10000 + num[3] * 1000;
    }
    else if (cnt == 1)
    {
        cout << 1000 + num[3] * 100;
    }
    else 
        cout << num[2] * 100;
    
    return 0;
}