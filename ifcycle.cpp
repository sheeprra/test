#include<iostream>
#include<string>
#include<ctime>
#include<Windows.h>

using namespace std;

int main()
{

	srand((unsigned int)time(0));//随机数



	int i = 0;
	int m, n;

	  //循环语句
	while (i < 500) {
		i = rand() % 600;//根据srand产生的种子生成随机数
		cout << "随机生成的分数：" << i << endl;;

		if (i > 400)
		{
			if (i > 500)
			{
				cout << "111" << endl;
			}
			if (i > 600)
			{
				cout << "222" << endl;
			}

			cout << "good" << endl;
		}
		else if (i <= 400)
		{
			cout << "continue" << endl;
		}
		else
		{
			cout << "ahh" << endl;
		}


		//switch跳转语句
		switch (i)
		{
		case 100:
			cout << "100是整数" << endl;
			break;//退出此模块

		case 200:
			cout << "200是整数" << endl;
			break;

		case 300:
			cout << "300是整数" << endl;
			break;

		case 400:
			cout << "400是整数" << endl;
			break;

		case 500:
			cout << "500是整数" << endl;
			break;
		default:break;

		}

	}

	//九九乘法表 嵌套循环
	for (m = 1; m < 10; m++) {
		for (n = 1; n < m+1; n++)
		{
			if ((n % 2) != 0) { continue; }//去除奇数
			printf("%d * %d = %d\t", n, m, m * n);
		}
		printf("\n");
	}

	
	
	cout << "1" << endl;
	goto Flag;//跳转语句goto
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	Flag:
	cout << "5" << endl;
	cout << "6" << endl;


	return 0;
}