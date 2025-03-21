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
			cout << "你猜的数字偏大了！" << endl;
		else if (guessNum < num)
			cout << "你猜的数字偏小了" << endl;
		cin >> guessNum;
	}

	cout << "你猜对了,结果是:" << num << endl;

	system("pause");

	return 0;
}