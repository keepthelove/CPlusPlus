#include<iostream>
using namespace std;

/*
	二维数组定义形式
	1.数据类型 数组名[行数][列数]；
	2.数据类型 数组名[行数][列数] = {{数据11，数据12，...},{数据21，数据22，...}，...}；
	3.数据类型 数组名[行数][列数] = {数据1，数据2，数据3，...}；
	4.数据类型 数组名[][列数] = {数据1，数据2，数据3，...}；
*/

int main(void)
{
	//方式1 数组名[行数][列数]；
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 2;
	arr1[1][0] = 3;
	arr1[1][1] = 4;
	arr1[1][2] = 7;

	//打印
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++) {
		for (int j = 0; j < sizeof(arr1[0]) / sizeof(arr1[0][0]); j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << "\n";
	}

	//方式2 数组名[行数][列数] = {{数据11，数据12，...},{数据21，数据22，...}，...}；
	int arr2[2][3] = { {1,2,2},{3,4,7} };
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		for (int j = 0; j < sizeof(arr2[0]) / sizeof(arr2[0][0]); j++) {
			cout << arr2[i][j] << " ";
		}
		cout << "\n";
	}

	//方式3 数组名[行数][列数] = {数据1，数据2，数据3，...}；
	int arr3[2][3] = { 1,2,2,3,4,7 };
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		for (int j = 0; j < sizeof(arr3[0]) / sizeof(arr3[0][0]); j++) 
		{
			cout << arr3[i][j] << " ";
		}
		cout << "\n";
	}

	//方式4 数据类型 数组名[][列数] = {数据1，数据2，数据3，...}；
	int arr4[][3] = { 1,2,2,3,4,7 };
	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++)
	{
		for (int j = 0; j < sizeof(arr4[0]) / sizeof(arr4[0][0]); j++) {
			cout << arr4[i][j] << " ";
		}
		cout << "\n";
	}


	system("pause");
	return 0;
}