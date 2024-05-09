#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2) {
	if (s1.length() == s2.length()) {
		return s1 < s2;
	}
	else {
		return s1.length() < s2.length();
	}
}

int main() {
	int  total = 0;
	cin >> total;
	string* words = new string[total];

	for (int i = 0; i < total; i++) {
		cin >> words[i];
	}

	sort(words, words+total, cmp);

	for (int i = 0; i < total; i++) {
		if (words[i] == words[i + 1]) {
			continue;
		}
		cout << words[i] << endl;
	}
    
    delete[] words;
    
    return 0;
}