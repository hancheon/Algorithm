#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, v;
    int num[201] = {};
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        num[temp + 100]++;
    }
    cin >> v;
    
    cout << num[v + 100];
}