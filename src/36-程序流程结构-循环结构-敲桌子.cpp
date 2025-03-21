#include<iostream>
using namespace std;

//数字中含有7或者是7的倍数,打印敲桌子，其余直接打印

int main(void) 
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)// 7的倍数
			cout << "敲桌子" << endl;
		else if (i % 10 == 7 || i / 10 % 7 == 7)// 含7但不是7的倍数
			cout << "敲桌子" << endl;
		else // else
			cout << i << endl;
	}

	system("pause");
	return 0;
}