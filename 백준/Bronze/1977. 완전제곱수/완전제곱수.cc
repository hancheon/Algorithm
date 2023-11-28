#include <iostream>
using namespace std;

int main(void)
{
    int M, N;
    int min = 0, sum = 0, i = 0;
    
    cin >> M;
    cin >> N;
    
    while(1)
    {
        if(i*i >= M) {
            min = i*i;
            for(i; i*i <= N; i++) {
                sum += i*i;
            } break;
        }
        i++;
    }

    if(sum == 0) {
        cout << "-1" << endl;
    } else {
        cout << sum << "\n";
        cout << min << endl;
    }

    return 0;
}