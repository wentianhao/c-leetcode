///*
//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector <int> result;
//		for (int i = 0; i<nums.size(); i++) {
//			for (int j = i + 1; j<nums.size(); j++) {
//				if (nums[i] + nums[j] == target) {
//					result.push_back(i);
//					result.push_back(j);
//				}
//			}
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> nums = { 2, 7, 11, 15};
//	vector<int> result;
//	vector<int>::iterator iter;
//	int target;
//	cin >> target;
//	result = s.twoSum(nums, target);
//	for (iter  = result.begin(); iter < result.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//	return 0;
//}