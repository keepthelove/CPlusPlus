#include<iostream>
using namespace std;

int main(void) {
	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;

	switch (score) {
	case 10 :
		cout << "经典:" << score <<  endl;
		break;
	case 9:
		cout << "经典:" << score << endl;
		break;
	case 8:
		cout << "很好:" << score << endl;
		break;
	case 7:
		cout << "好:" << score << endl;
		break;
	default:
		cout << "你认为这是一个烂片" << endl;
		break;
	}


	system("pause");

	return 0;
}