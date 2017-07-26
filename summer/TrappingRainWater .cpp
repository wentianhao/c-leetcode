///*
//Given n non-negative integers representing an elevation map where the width of each bar is 1,
//compute how much water it is able to trap after raining. */
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int trap(vector<int>& height) {
//		int result=0;
//		int left = 0, right = height.size() - 1;
//		int temp;	//存放最短板
//		int i;
//
//		while (left < right) {
//			if (height[left] < height[right]) {//当左边板子小于右边板子时
//				temp = height[left];
//				i = left + 1;
//				while (i < right&&height[i] < temp) {//当右边的板子小于左边的板子即求出面积
//					result = result + temp - height[i];
//					i++;
//				}
//				left = i;
//			}
//			else {//当左边板子大于右边板子时
//				temp = height[right];
//				i = right - 1;
//				while (i > left&&height[i] < temp) {
//					result = result + temp - height[i];
//					i--;
//				}
//				right = i;
//			}
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> height = { 0,1,0,2,1,0,1,3,2,1,2,1 };
//	cout << s.trap(height) << endl;
//	
//	return 0;
//}