#include<iostream>
using namespace std;

int main(void) {
	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;

	switch (score) {
	case 10 :
		cout << "����:" << score <<  endl;
		break;
	case 9:
		cout << "����:" << score << endl;
		break;
	case 8:
		cout << "�ܺ�:" << score << endl;
		break;
	case 7:
		cout << "��:" << score << endl;
		break;
	default:
		cout << "����Ϊ����һ����Ƭ" << endl;
		break;
	}


	system("pause");

	return 0;
}