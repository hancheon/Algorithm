#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, input;
    int sumY = 0;
    int sumM = 0;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        sumY += (input / 30 + 1);
        sumM += (input / 60 + 1);
    }
    
    sumY *= 10;
    sumM *= 15;
    
    if (sumY > sumM)
    {
        cout << "M " << sumM;
    }
    else if (sumY < sumM)
    {
        cout << "Y " << sumY;
    }
    else
    {
        cout << "Y M " << sumY;
    }
    
    return 0;
}