#include <string>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int classify[9] = {0};
    for (int i = 0; i < score.size(); i++)
    {
        for (int j = k; j >= 1; j--) {
            if (score[i] == j) {
                classify[j-1]++;
            }
        }
    }
    
    for (int i = k - 1; i >= 0; i--) {
        if (classify[i] % m == 0) {
            answer += (i + 1) * classify[i];
        } else {
            answer += (i + 1) * (classify[i] / m) * m;
            if (i != 0) {
                classify[i - 1] += classify[i] % m;
            }
        }
    }
    return answer;
}