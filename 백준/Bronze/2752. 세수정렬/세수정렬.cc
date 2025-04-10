#include <iostream>
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
    
    for (int cnt = 0; cnt < 3; cnt++)
    {
        for (int cnt2 = cnt + 1; cnt2 < 3; cnt2++)
        {
            if (num[cnt] > num[cnt2])
            {
                int temp = num[cnt];
                num[cnt] = num[cnt2];
                num[cnt2] = temp;
            }
        }
    }
    
    for (int cnt = 0; cnt < 3; cnt++)
        cout << num[cnt] << " ";
}