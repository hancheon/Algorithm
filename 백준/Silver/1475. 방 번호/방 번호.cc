#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int num[10] = {0};
    
    cin >> N;

    while (N > 0)
    {
        num[N % 10]++;
        N /= 10;
    }
    
    if ((num[6] + num[9]) % 2)
        num[6] = (num[6] + num[9]) / 2 + 1;
    else
        num[6] = (num[6] + num[9]) / 2;
    
    int max = 0;
    for (int i = 0; i < 9; i++)
    {
        if (num[i] > max)
            max = num[i];
    }
    
    cout << max;
}