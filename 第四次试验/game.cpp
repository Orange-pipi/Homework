/*************************************************
** 功能 : 一键十行
** 作者 : tsingke
** 创建 : 2020-10-27 / 21:17
** 版权 : tsingke@sdnu.edu.cn
** 二次制作(已授权) : Orange-pipi
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

/*----------------------------------*
		 Class Definition
*-----------------------------------*/



/*----------------------------------*
		Global Definition
*-----------------------------------*/




/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{

	srand(time(0));
	int i, k = 0, m, n, x;

	char ch;
	cout << "您一共想玩_关？" << endl;

	cin >> x;
	while (k <= x - 1)
	{
		k++;
		cout << endl << "第" << k << "关：" << "请猜一个" << k << "位数。" << endl << endl;


		m = rand() % 9 + 1;

		for (i = 1; i <= k - 1; i++)
			m = m * 10 + rand() % 10;
		while (1)

		{
			cin >> n;
			while (!cin)
			{
				cin.clear();
				cin >> n;

			}
			if (n == 0)

				cin >> n;

			if (n == m)

			{
				cout << "恭喜您猜对了" << endl;

				break;
			}
			else if (n > m)cout << "您猜大了" << endl;

			else cout << "您猜小了" << endl;
		}
		cout << endl;
	}
	cout << endl << endl << "您赢了！" << endl;


	system("pause");

	return 0;
}