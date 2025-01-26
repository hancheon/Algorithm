#include <iostream>
using namespace std;

int main()
{
    int N;
    int weight[50] = { 0 };
    int height[50] = { 0 };
    int rank[50] = { 0 };
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> height[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j)
            {
                if (weight[i] < weight[j] && height[i] < height[j])
                    rank[i]++;
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
       printf("%d ", rank[i] + 1);
    }
    
    return 0;
}