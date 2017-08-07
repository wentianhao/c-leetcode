#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
		minesweeper(board, click[0], click[1]);
		return board;
	}

	void minesweeper(vector<vector<char>>& board, int row, int col) {
		if (board[row][col] == 'M') {//如果点到M，即踩到雷，游戏结束
			board[row][col] = 'X';
			return;
		}
		else {
			int i = row - 1;
			int j = col - 1;
			int cnt = 0;
			bool flag = false;
			if (i<0) //如果点击到的是第一排或第一列
				i = 0;
			if (j<0)
				j = 0;
			for (i; i <= row + 1; i++) {
				if (i == board.size())//判断i是否越界
					break;
				for (int j = col - 1; j <= col + 1; j++) {
					if (j == board[0].size())  //判断j是否越界
						break;
					if (board[i][j] == 'M') {
						flag = true;
						cnt++;
					}
				}
			}
			if (flag == true) {//如果有炸弹的话
				board[row][col] = cnt + '0';
				return;
			}
			board[row][col] = 'B';    //如果没有炸弹
			i = row - 1;
			j = col - 1;
			if (i<0) //如果点击到的是第一排或第一列
				i = 0;
			if (j<0)
				j = 0;
			for (i; i <= row + 1; i++) {
				if (i == board.size())//判断i是否越界
					break;
				for (int j = col - 1; j <= col + 1; j++) {
					if (j == board[0].size())  //判断j是否越界
						break;
					if (board[i][j] == 'E') {
						minesweeper(board, i, j);
					}
				}
			}
		}
	}

};