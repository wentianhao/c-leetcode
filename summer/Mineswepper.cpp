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
		if (board[row][col] == 'M') {//����㵽M�����ȵ��ף���Ϸ����
			board[row][col] = 'X';
			return;
		}
		else {
			int i = row - 1;
			int j = col - 1;
			int cnt = 0;
			bool flag = false;
			if (i<0) //�����������ǵ�һ�Ż��һ��
				i = 0;
			if (j<0)
				j = 0;
			for (i; i <= row + 1; i++) {
				if (i == board.size())//�ж�i�Ƿ�Խ��
					break;
				for (int j = col - 1; j <= col + 1; j++) {
					if (j == board[0].size())  //�ж�j�Ƿ�Խ��
						break;
					if (board[i][j] == 'M') {
						flag = true;
						cnt++;
					}
				}
			}
			if (flag == true) {//�����ը���Ļ�
				board[row][col] = cnt + '0';
				return;
			}
			board[row][col] = 'B';    //���û��ը��
			i = row - 1;
			j = col - 1;
			if (i<0) //�����������ǵ�һ�Ż��һ��
				i = 0;
			if (j<0)
				j = 0;
			for (i; i <= row + 1; i++) {
				if (i == board.size())//�ж�i�Ƿ�Խ��
					break;
				for (int j = col - 1; j <= col + 1; j++) {
					if (j == board[0].size())  //�ж�j�Ƿ�Խ��
						break;
					if (board[i][j] == 'E') {
						minesweeper(board, i, j);
					}
				}
			}
		}
	}

};