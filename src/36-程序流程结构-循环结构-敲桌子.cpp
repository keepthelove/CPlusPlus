#include<iostream>
using namespace std;

//�����к���7������7�ı���,��ӡ�����ӣ�����ֱ�Ӵ�ӡ

int main(void) 
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)// 7�ı���
			cout << "������" << endl;
		else if (i % 10 == 7 || i / 10 % 7 == 7)// ��7������7�ı���
			cout << "������" << endl;
		else // else
			cout << i << endl;
	}

	system("pause");
	return 0;
}