#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> num1, pair<int, int> num2)
{
    return num1.second <= num2.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pair<int, int> nums[9];
    
    for (int i = 0; i < 9; i++)
    {
        nums[i].first = i;
        cin >> nums[i].second;
    }
    
    sort(nums, nums + 9, cmp);
    
    cout << nums[8].second << '\n' << nums[8].first + 1;
}