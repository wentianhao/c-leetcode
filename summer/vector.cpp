//////#include <iostream>
//////#include <vector>
//////
//////using namespace std;
//////
//////int main()
//////{
//////	vector<int>::iterator iter;
//////	//��һ�ַ�ʽ
//////	vector<int> v1;
//////	v1.push_back(1);
//////	v1.push_back(2);
//////	v1.push_back(3);
//////	cout << "��һ�ַ�ʽ����������" << endl;
//////	for (iter = v1.begin(); iter != v1.end(); iter++)
//////	{
//////		cout << *iter << " ";
//////	}
//////	cout << endl;
//////
//////
//////	//�ڶ��ַ�ʽ
//////	vector<int> v2(v1);
//////	cout << "�ڶ��ַ�ʽ����������" << endl;
//////	for (iter = v2.begin(); iter != v2.end(); iter++)
//////	{
//////		cout << *iter << " ";
//////	}
//////	cout << endl;
//////
//////
//////	//�����ַ�ʽ
//////	vector<int> v3(3);
//////	cout << "�����ַ�ʽ����������" << endl;
//////	for (iter = v3.begin(); iter != v3.end(); iter++)
//////	{
//////		cout << *iter << " ";
//////	}
//////	cout << endl;
//////	//�����ַ�ʽ
//////	vector<int> v4(3, 4);
//////	cout << "�����ַ�ʽ����������" << endl;
//////	for (iter = v4.begin(); iter != v4.end(); iter++)
//////	{
//////		cout << *iter << " ";
//////	}
//////	cout << endl;
//////	//�����ַ�ʽ
//////	vector<int> v5(v1.begin(), v1.end() - 1);
//////	cout << "�����ַ�ʽ����������" << endl;
//////	for (iter = v5.begin(); iter != v5.end(); iter++)
//////	{
//////		cout << *iter << " ";
//////	}
//////	cout << endl;
//////	//�����ַ�ʽ
//////	int a[] = { 1,2,3,4 };
//////	vector<int> v6(a + 1, a + 2);
//////	cout << "�����ַ�ʽ����������" << endl;
//////	for (iter = v6.begin(); iter != v6.end(); iter++)
//////	{
//////		cout << *iter << " ";
//////	}
//////	cout << endl;
//////	//
//////	v6.~vector<int>();
//////	cout << "�ͷ��ڴ��Ľ���ǣ�" << endl;
//////	for (iter = v6.begin(); iter != v6.end(); iter++)
//////	{
//////		cout << *iter << " ";
//////	}
//////	cout << endl;
//////	return 0;
//////}
////
////
////#include <iostream>
////#include <cmath>
////using namespace std;
////
////int recv(double n)
////{
////	double sum = 1;
////	if (1 == n)
////	{
////		return 1;
////	}
////	sum = n * recv(n - 1);
////	return sum;
////}
////
////int main()
////{
////	double k;
////	double x;
////	double p;
////	cin >> x;
////	while (true)
////	{
////	cin >> k;
////	p = pow(x, k)*exp(-x) / recv(k);
////	cout << p;
////	}
////
////
////	//double a[8] = { 0.0183,0.0733,0.1465,0.1954,0.1954,0.1563};	
////	//double sum=0;
////	//double m;
////	//while (true)
////	//{
////	//	sum = 0;
////	//	cin >> m;
////	//	for (int i = 0; i < 8; i++) {
////	//		sum += a[i]*(5-m);
////	//	}
////	//	cout << sum << "   ";
////	//}
////		return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<vector<int>> nums = { {10,1},{1,1} ,{2,3} };
//	vector<pair<int, int>> v; //���ÿ�������Ե��б��
//	vector<int>res;
//	auto min = 1000, m = 0;
//	
//	for (int i = 0; i<nums.size(); i++) {
//		for (int j = 0; j<nums[i].size(); j++) {
//			v.push_back({ nums[i][j],i });
//		}
//	}
//	sort(v.begin(),v.end());
//
//
//	if (nums.size() == 1) {
//		res = { v[0].first,v[0].first };
//	}
//	else if (nums.size()<3) {
//		for (int i = 0; i<v.size(); i++) {
//			for (int j = i + 1; j<v.size(); j++) {
//				if (v[i].second != v[j].second) {
//					m = v[j].first - v[i].first;
//					if (m<min) {
//						min = m;
//						res = { v[i].first,v[j].first };
//					}
//				}
//			}
//		}
//	}
//	else {
//		for (int i = 0; i<v.size(); i++) {
//			for (int j = i + 1; j<v.size(); j++) {
//				if (v[i].second != v[j].second) {
//					for (int z = j + 1; z<v.size(); z++) {
//						if (v[z].second != v[i].second && v[z].second != v[j].second) {
//							m = v[z].first - v[i].first;
//							if (m<min) {
//								min = m;
//								res = { v[i].first,v[z].first };
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	cout << endl;
//	return 0;
//}