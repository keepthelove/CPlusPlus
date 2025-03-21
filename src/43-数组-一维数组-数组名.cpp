#include<iostream>
using namespace std;

/*
一维数组名称用途
1.可以统计整个数组在内存中的长度
2.可以获取数组在内存中的首地址
*/

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };//tips：int类型在64位操作系统占4个字节
	cout << "数组size：" << sizeof(arr) << endl;//inference sizeof的结果单位为字节

	//数组首地址
	cout << "数组首address：" << arr << endl;
	cout << "数组第一个元素address：" << &arr[0] << endl;
	cout << "数组第二个元素address：" << &arr[1] << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << "数组元素地址：" << &(arr[i]) << endl;

	//数组名是常量，不可以进行赋值操作
	int* b = arr;

	b[0] = 100;
	arr[0] = 50;
	cout << "b:" << b[0] << endl;
	cout << "arr[0]:" << arr[0] << endl;

	system("pause");
	return 0;
}