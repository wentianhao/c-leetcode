#include <iostream>
#include <istream>
#include <string.h>
#include <string>
using namespace std;


class Solution {
public:
	bool isScramble(string s1, string s2) {
		if (s1 == s2)
			return true;

		int a[26] = { 0 }, b[26] = { 0 };
		for (int i = 0; i<s1.length(); i++) {
			a[s1[i] - 'a']++;
			a[s2[i] - 'a']--;
		}

		for (int i = 0; i<26; i++) {
			if (a[i] != b[i])
				return false;
		}
		for (int i = 1; i<s1.length(); i++) {
			if ((isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i))) || (isScramble(s1.substr(0, i), s2.substr(s2.length() - i)) && isScramble(s1.substr(i), s2.substr(0, s2.length() - i))))
				return true;
		}
		return false;
	}
};
//string stringToString(string input) {
//	return input.substr(0, input.length() - 1);
//}
//
//string boolToString(bool input) {
//	return input ? "True" : "False";
//}

int main() {
	string s1,s2;
	cin >> s1;
	cin >> s2;
	Solution s;
	bool flag=s.isScramble(s1, s2);
	cout << flag << endl;
	return 0;
}