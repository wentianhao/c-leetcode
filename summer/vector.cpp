//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int>::iterator iter;
//	//��һ�ַ�ʽ
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	cout << "��һ�ַ�ʽ����������" << endl;
//	for (iter = v1.begin(); iter != v1.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//�ڶ��ַ�ʽ
//	vector<int> v2(v1);
//	cout << "�ڶ��ַ�ʽ����������" << endl;
//	for (iter = v2.begin(); iter != v2.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//�����ַ�ʽ
//	vector<int> v3(3);
//	cout << "�����ַ�ʽ����������" << endl;
//	for (iter = v3.begin(); iter != v3.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//�����ַ�ʽ
//	vector<int> v4(3, 4);
//	cout << "�����ַ�ʽ����������" << endl;
//	for (iter = v4.begin(); iter != v4.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//�����ַ�ʽ
//	vector<int> v5(v1.begin(), v1.end() - 1);
//	cout << "�����ַ�ʽ����������" << endl;
//	for (iter = v5.begin(); iter != v5.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//�����ַ�ʽ
//	int a[] = { 1,2,3,4 };
//	vector<int> v6(a + 1, a + 2);
//	cout << "�����ַ�ʽ����������" << endl;
//	for (iter = v6.begin(); iter != v6.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//
//	v6.~vector<int>();
//	cout << "�ͷ��ڴ��Ľ���ǣ�" << endl;
//	for (iter = v6.begin(); iter != v6.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	return 0;
//}