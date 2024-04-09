#include <iostream>
using namespace std;

int main() { // 백준 10989
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t_num, n;
    cin >> t_num;
    
    int num_l[10001] = { 0 };

    for (int i = 0; i < t_num; i++) {
        cin >> n;
        num_l[n]++;
    }

    for (int k = 1; k < 10001; k++) {
        for (int p = 0; p < num_l[k]; p++) {
            cout << k << "\n";
        }
    }

    return 0;
}