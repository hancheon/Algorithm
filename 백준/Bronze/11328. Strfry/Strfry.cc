#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int alpha1[26] = {};
        int alpha2[26] = {};
        bool flag = true;
        
        string str1, str2;
        cin >> str1 >> str2;
        
        for (int j = 0; j < str1.length(); j++)
        {
            alpha1[str1[j] - 'a']++;
            alpha2[str2[j] - 'a']++;
        }
        
        for (int k = 0; k < 26; k++)
        {
            if (alpha1[k] != alpha2[k])
            {
                flag = false;
                break;
            }
        }
        
        if (!flag)
            cout << "Impossible" << '\n';
        else
            cout << "Possible" << '\n';
    }
}