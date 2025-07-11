#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1, s2;
    cin >> s1 >> s2;
    
    int alpha[26] = {};
    
    for (int i = 0; i < s1.length(); i++)
    {
        alpha[s1[i] - 'a']++;
    }
    
    for (int i = 0; i < s2.length(); i++)
    {
        alpha[s2[i] - 'a']--;
    }
    
    int remove = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i])
            remove += abs(alpha[i]);
    }
    
    cout << remove;
}