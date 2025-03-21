#include<iostream>
using namespace std;

int main(void)
{
	//1.查看占用内存大小
	int arr[2][3] = { {1,2,3},{4,5,6} };

	//输出二维数组占用内存
	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存为：" << sizeof(arr[0][0]) << endl;
	
	//行数 列数
	cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.查看二维数组内存地址
	cout << "二维数组首地址：" << arr << endl;
	cout << "二维数组第一行首地址：" << arr[0] << endl;
	cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
	cout << "二维数组第二行首地址：" << arr[1] << endl;

	//地址连续
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) 
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) 
		{
			cout << &arr[i][j] << " ";
		}
	}


	system("pause");
	return 0;
}