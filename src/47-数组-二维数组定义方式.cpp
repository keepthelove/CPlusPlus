#include<iostream>
using namespace std;

/*
	��ά���鶨����ʽ
	1.�������� ������[����][����]��
	2.�������� ������[����][����] = {{����11������12��...},{����21������22��...}��...}��
	3.�������� ������[����][����] = {����1������2������3��...}��
	4.�������� ������[][����] = {����1������2������3��...}��
*/

int main(void)
{
	//��ʽ1 ������[����][����]��
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 2;
	arr1[1][0] = 3;
	arr1[1][1] = 4;
	arr1[1][2] = 7;

	//��ӡ
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++) {
		for (int j = 0; j < sizeof(arr1[0]) / sizeof(arr1[0][0]); j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << "\n";
	}

	//��ʽ2 ������[����][����] = {{����11������12��...},{����21������22��...}��...}��
	int arr2[2][3] = { {1,2,2},{3,4,7} };
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		for (int j = 0; j < sizeof(arr2[0]) / sizeof(arr2[0][0]); j++) {
			cout << arr2[i][j] << " ";
		}
		cout << "\n";
	}

	//��ʽ3 ������[����][����] = {����1������2������3��...}��
	int arr3[2][3] = { 1,2,2,3,4,7 };
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		for (int j = 0; j < sizeof(arr3[0]) / sizeof(arr3[0][0]); j++) 
		{
			cout << arr3[i][j] << " ";
		}
		cout << "\n";
	}

	//��ʽ4 �������� ������[][����] = {����1������2������3��...}��
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