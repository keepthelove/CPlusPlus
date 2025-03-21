#include<iostream>
using namespace std;

int main(void) {
	//三目运算符
	int a, b, c;

	a = 10;
	b = 100;
	c = 50;

	c = (a > b ? a : b);
	cout << c << endl;


	//**********UnKnown Knowledge********//
	//C++中三目运算符返回的是变量
	(a > b ? a : b) = 200;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}