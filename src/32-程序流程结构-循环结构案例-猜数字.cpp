#include<iostream>
using namespace std;

int GetNum(int min, int max)
{
	return (rand() % (max - min) + min);
}

int main(void) {
	srand(time(NULL));
	int num = GetNum(1,100);

	int guessNum = 0;
	cin >> guessNum;
	while (guessNum != num) {
		if (guessNum > num)
			cout << "��µ�����ƫ���ˣ�" << endl;
		else if (guessNum < num)
			cout << "��µ�����ƫС��" << endl;
		cin >> guessNum;
	}

	cout << "��¶���,�����:" << num << endl;

	system("pause");

	return 0;
}