#include <iostream>
using namespace std;

int num[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, X;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        num[temp]++;
    }
    cin >> X;

    int set = 0;
    for (int i = 1; i < min(1000001, X / 2 + 1); i++)
    {
        if ((X - i) > 1000000)
            continue;
        
        if (i == (X - i))
        {
            set += (num[i] / 2);
            continue;
        }
        
        set += min(num[i], num[X - i]);
    }

    cout << set;
}