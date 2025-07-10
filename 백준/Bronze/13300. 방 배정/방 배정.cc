#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    int s[2][7] = {};
    
    cin >> N >> K;
    
    for (int i = 0; i < N; i++)
    {
        int gender, grade;
        cin >> gender >> grade;
        s[gender][grade]++;
    }
    
    int room = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            room += (s[i][j] % K == 0 ? s[i][j] / K : s[i][j] / K + 1);
        }
    }
    
    cout << room;
}