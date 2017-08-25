//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//	string frequencySort(string s) {
//		/*	string x;
//			char count[1000] = { 0 };
//			bool flag[1000] = { 0 };
//			char temp;
//			for (int i = 0; i < s.length(); i++)
//				count[s[i] - ' ']++;
//
//			for (int i = 0; i < s.length(); i++) {
//				for (int j = i + 1; j < s.length(); j++) {
//					if (count[s[i] - ' '] <= count[s[j] - ' '] && flag[s[i] - ' '] == 0) {
//						temp = s[i];
//						s[i] = s[j];
//						s[j] = temp;
//					}
//				}
//				flag[s[i] - ' '] = 1;
//			}
//			return s;
//		}*/
//
//		string x;
//		int count[256] = { 0 };
//		int m = 0;
//		int i;
//		int a ;
//		for (int i = 0; i < s.length(); i++)
//			count[s[i]]++;
//
//		for (int j = 0; j < s.length(); j++) {
//			for (i = 0; i < 256; i++) {
//				if (m <= count[i]) {
//					a = i;
//					m = count[i];
//				}
//			}
//			for (int z = 0; z < count[a]; z++) {
//				//cout << s[j];
//				x.push_back(a);
//			}
//			count[a] = 0;
//			m = 0;
//		}
//		return x;
//	}
//};
//
//int main()
//{
//	string s;
//	cin >> s;
//	Solution x;
//	cout << x.frequencySort(s);
//	return 0;
//}
