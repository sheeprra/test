#include<iostream>
#include<string>
#include<ctime>
#include<Windows.h>

using namespace std;

int main()
{

	srand((unsigned int)time(0));//�����



	int i = 0;
	int m, n;

	  //ѭ�����
	while (i < 500) {
		i = rand() % 600;//����srand�������������������
		cout << "������ɵķ�����" << i << endl;;

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


		//switch��ת���
		switch (i)
		{
		case 100:
			cout << "100������" << endl;
			break;//�˳���ģ��

		case 200:
			cout << "200������" << endl;
			break;

		case 300:
			cout << "300������" << endl;
			break;

		case 400:
			cout << "400������" << endl;
			break;

		case 500:
			cout << "500������" << endl;
			break;
		default:break;

		}

	}

	//�žų˷��� Ƕ��ѭ��
	for (m = 1; m < 10; m++) {
		for (n = 1; n < m+1; n++)
		{
			if ((n % 2) != 0) { continue; }//ȥ������
			printf("%d * %d = %d\t", n, m, m * n);
		}
		printf("\n");
	}

	
	
	cout << "1" << endl;
	goto Flag;//��ת���goto
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	Flag:
	cout << "5" << endl;
	cout << "6" << endl;


	return 0;
}