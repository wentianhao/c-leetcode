//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int>::iterator iter;
//	//第一种方式
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	cout << "第一种方式的输出结果：" << endl;
//	for (iter = v1.begin(); iter != v1.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//第二种方式
//	vector<int> v2(v1);
//	cout << "第二种方式的输出结果：" << endl;
//	for (iter = v2.begin(); iter != v2.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//第三种方式
//	vector<int> v3(3);
//	cout << "第三种方式的输出结果：" << endl;
//	for (iter = v3.begin(); iter != v3.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//第四种方式
//	vector<int> v4(3, 4);
//	cout << "第四种方式的输出结果：" << endl;
//	for (iter = v4.begin(); iter != v4.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//第五种方式
//	vector<int> v5(v1.begin(), v1.end() - 1);
//	cout << "第五种方式的输出结果：" << endl;
//	for (iter = v5.begin(); iter != v5.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//第六种方式
//	int a[] = { 1,2,3,4 };
//	vector<int> v6(a + 1, a + 2);
//	cout << "第六种方式的输出结果：" << endl;
//	for (iter = v6.begin(); iter != v6.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	//
//	v6.~vector<int>();
//	cout << "释放内存后的结果是：" << endl;
//	for (iter = v6.begin(); iter != v6.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//	return 0;
//}