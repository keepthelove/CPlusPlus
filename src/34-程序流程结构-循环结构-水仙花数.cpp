#include<iostream>
#include<math.h>
using namespace std;

//ˮ�ɻ���ָ����ÿ����λ�ϵ��������η�֮�͵��ڱ���

int main(void) {
	int num;
	cin >> num;
	int sum = 0;

	int tmp = num;
	while (tmp) {
		sum += pow(tmp % 10, 3);
		tmp /= 10;
	}

	if (sum == num)
		cout << "Yes,��ˮ�ɻ���" << endl;
	else
		cout << "No,����ˮ�ɻ���" << endl;

	system("pause");

	return 0;
}