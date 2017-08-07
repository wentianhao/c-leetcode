#include <iostream>
#include <algorithm>
using namespace std;

int a[100000], b[100000];	//a������������b���޷�����
int k[1000], p[1000];	//k�������ľ�ʯ��Ŀ��p�����˺�ֵ
int bp[1001][11];	//bp[i][j]������Ϊi������Ϊj�Ĺ�����Ҫˮ��
const int inf = 100000000;

int main()
{
	int m,n;	//n������ m�ֹ���
	while (cin >> n >> m) {
		int result = 0;
		int maxp = 0;
		int flag = 0;

		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> k[i] >> p[i];
			maxp = max(maxp, p[i]);
		}
		for (int i = 0; i < n; i++) {
			if (b[i] >= maxp) {//��Ƿ��������ڼ�����󹥻��˺�
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << "-1" << endl;
			continue;
		}

		for (int i = 0; i <= 1000; i++) {
			for (int j = 0; j <= 10; j++) {
				if (i == 0)//������Ϊ0
					bp[i][j] = 0;
				else
					bp[i][j] = inf;
			}
		}

		for (int l = 0; l < m; l++) {//m�ֹ���
			for (int j = 0; j <= 10; j++) {		//j������
				for (int i = 0; i <= 1000; i++) {		//i������
					if (p[l] <= j)	//�������С�ڷ���
						continue;
					if (i <= p[l] - j)//һ�ι������������С�ھ�����
						bp[i][j] = min(bp[i][j], k[l]);	//�ҵ�ÿ�ֹ����ķѾ�ʯ��С
					else if (bp[i][j] > bp[i - (p[l] - j)][j] + k[l])
						bp[i][j] = bp[i - (p[l] - j)][j] + k[l];
				}
			}
		}

		for (int i = 0; i < n; i++) {
			result = result + bp[a[i]][b[i]];
		}
		cout << result << endl;
	}
	return 0;
}