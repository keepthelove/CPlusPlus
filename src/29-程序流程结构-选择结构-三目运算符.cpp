#include<iostream>
using namespace std;

int main(void) {
	//��Ŀ�����
	int a, b, c;

	a = 10;
	b = 100;
	c = 50;

	c = (a > b ? a : b);
	cout << c << endl;


	//**********UnKnown Knowledge********//
	//C++����Ŀ��������ص��Ǳ���
	(a > b ? a : b) = 200;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}