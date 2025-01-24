#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int temp;
    vector<int> num;
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        num.push_back(temp);
    }
    
    sort(num.begin(), num.end());
    
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", num[i]);
    }
    
    return 0;
}