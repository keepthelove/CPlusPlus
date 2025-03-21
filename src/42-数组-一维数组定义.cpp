#include<iostream>
using namespace std;

//一维数组定义的三种方式：
/*
1.数据类型 数组名[数组长度]；
2.数据类型 数组名[数组长度] = { 值1，值2，... }；
3.数据类型 数组名[] = { 值1，值2，... }；
*/

int main(void)
{
	//定义方式1
	int arr[5];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";

	cout << "\n";

	//定义方式2
	//这种数组的定义机制，初始化的元素个数小于数组长度，会使用默认值进行填充
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
		cout << arr2[i] << " ";

	cout << "\n";

	//定义方式3
	//定义数组的时候必须有初始长度
	int arr3[] = { 100,200,300,400,500 };
	for (int i = 0; i < sizeof(arr3) / sizeof(int); i++)
		cout << arr3[i] << " ";

	system("pause");
	return 0;
}
