///*
//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8
//*/
//#include <iostream>
//using namespace std;
///**
//* Definition for singly-linked list.
//* 
//*/
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode* l3=(ListNode*)malloc(sizeof(ListNode));
//		ListNode *p1 = l3;
//		ListNode *node = NULL;
//		
//	}
//};
//
//int main()
//{
//	Solution solution;
//	int A[] = { 2,4,7,9 };
//	int B[] = { 5,6,4 };
//	ListNode *head = NULL;
//	ListNode *head1 = (ListNode*)malloc(sizeof(ListNode));
//	ListNode *head2 = (ListNode*)malloc(sizeof(ListNode));
//	head1->next = NULL;
//	head2->next = NULL;
//	ListNode *node;
//	ListNode *pre = head1;
//	for (int i = 0; i < 4; i++) {
//		node = (ListNode*)malloc(sizeof(ListNode));
//		node->val = A[i];
//		node->next = NULL;
//		pre->next = node;
//		pre = node;
//	}
//	pre = head2;
//	for (int i = 0; i < 3; i++) {
//		node = (ListNode*)malloc(sizeof(ListNode));
//		node->val = B[i];
//		node->next = NULL;
//		pre->next = node;
//		pre = node;
//	}
//	head = solution.addTwoNumbers(head1->next, head2->next);
//	while (head != NULL) {
//		printf("%d ", head->val);
//		head = head->next;
//	}
//	return 0;
//}
//
