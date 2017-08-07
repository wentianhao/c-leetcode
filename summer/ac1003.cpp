#include <iostream>
#include <algorithm>
using namespace std;

int a[100000], b[100000];	//a怪兽生命力，b怪兽防御力
int k[1000], p[1000];	//k技能消耗晶石数目，p技能伤害值
int bp[1001][11];	//bp[i][j]生命力为i防御力为j的怪兽需要水晶
const int inf = 100000000;

int main()
{
	int m,n;	//n个怪兽 m种攻击
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
			if (b[i] >= maxp) {//标记防御力大于技能最大攻击伤害
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
				if (i == 0)//生命力为0
					bp[i][j] = 0;
				else
					bp[i][j] = inf;
			}
		}

		for (int l = 0; l < m; l++) {//m种攻击
			for (int j = 0; j <= 10; j++) {		//j防御力
				for (int i = 0; i <= 1000; i++) {		//i生命力
					if (p[l] <= j)	//如果攻击小于防御
						continue;
					if (i <= p[l] - j)//一次攻击如果生命力小于净攻击
						bp[i][j] = min(bp[i][j], k[l]);	//找到每种攻击耗费晶石最小
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