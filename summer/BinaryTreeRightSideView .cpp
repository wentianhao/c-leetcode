///*Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
//For example:
//Given the following binary tree,
//   1            <---
// /   \
//2     3         <---
// \     \
//  5     4       <---
//You should return [1, 3, 4]. 
//*/
//
//#include <iostream>
//#include <vector>
//#include<queue>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
///**
//* Definition for a binary tree node.
//*/
//
//class Solution {
//public:
//	vector<int> rightSideView(TreeNode* root) {
//		vector<int> result;
//		if (root == NULL)
//			return result;
//		queue<TreeNode *> q;
//		q.push(root);//将头结点压入栈
//		while (!q.empty()) {
//			result.push_back(q.front()->val);
//			int n = q.size(); //当前层元素的个数
//			while (n != 0) {
//				if (q.front()->right != NULL)
//					q.push(q.front()->right);
//				if (q.front()->left != NULL)
//					q.push(q.front()->left);
//				q.pop();
//				n--;
//			}
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//	TreeNode *root = new TreeNode(5);
//	TreeNode *node1 = new TreeNode(2);
//	TreeNode *node2 = new TreeNode(3);
//	TreeNode *node3 = new TreeNode(4);
//	TreeNode *node4 = new TreeNode(9);
//	TreeNode *node5 = new TreeNode(6);
//	TreeNode *node6 = new TreeNode(7);
//	TreeNode *node7 = new TreeNode(11);
//	
//	root->left = node2;
//	root->right = node4;
//	node2->left = node1;
//	node2->right = node3;
//	node4->left = node5;
//	node4->right = node7;
//	node5->right = node6;
//	vector<int> result= s.rightSideView(root);
//	cout <<result<< endl;
//	
//	return 0;
//}
//
