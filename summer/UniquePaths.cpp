/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. 
The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
How many possible unique paths are there?
*/
#include<iostream>
using namespace std;

class Solution {
public:
	int uniquePaths(int m, int n) {
		double result = 1;
		if (m == 1 || n == 1)
		{
			result = 1;
		}
		else 
			result = fac(m + n - 2) / (fac(n - 1)*fac(m - 1));	//如果m,n太大会超出double的范围
		return (int)result;
	}
	
	int fac(int x)
	{
		 double f = 1;    
		for (int i = 1; i <= x; i++)
		{
			f = f*i;
		}
		return (int)f;
	}

};

class Solution2 {
public:
	int uniquePaths(int m, int n) {
		double result = 1;//double可以表示300多位，int可以表示10位，float可以表示38位  
		if (m == 1 || n == 1)
		{
			result = 1;
		}
		int A, B;
		if (m >= n)
		{
			A = m;
			B = n;
		}
		else
		{
			B = m;
			A = n;
		}
			
		for (int i = A; i <= A + B - 2; i++)
		{
			result *= i;
		}
		for (int i = 1; i <= B - 1; i++)
		{
			result /= i;
		}
		return result;
	}

};



int main()
{
	Solution s;
	Solution2 x;
	cout << "please input m ,n " << endl;
	int m, n;
	cin >> m;
	cin >> n;
	//cout << s.uniquePaths(m, n) << endl;

	cout << x.uniquePaths(m, n) << endl;

	return 0;
}