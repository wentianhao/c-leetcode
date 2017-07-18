#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int leastInterval(vector<char>& tasks, int n) {
		vector<int> nums(26, 0);
		for (int i = 0; i<tasks.size(); ++i)
		{
			nums[tasks[i] - 'A']++;
		}
		int max_nums = 0;
		int count = 0;  //出现相同最大次数的个数
		for (int i = 0; i<26; ++i)
		{
			if (nums[i] > max_nums)
			{
				max_nums = nums[i];
				count = 1;
			}
			else if (max_nums == nums[i])
				count++;
		}
		if (tasks.size() >= (max_nums - 1)*(n + 1) + count)
			return tasks.size();
		else
			return ((max_nums - 1)*(n + 1) + count);
	}
};

int main()
{
	Solution s;
	vector<char> tasks = {'A','A','A','B','B','B'};
	int n;
	cin >> n;
	cout << s.leastInterval(tasks, n) << endl;
}