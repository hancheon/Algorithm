#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0;
    int num[6];
    
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    
    sort(num, num + 5);
    
    cout << sum / 5 << '\n' << num[2];
    
    return 0;
}