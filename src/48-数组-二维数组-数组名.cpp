#include<iostream>
using namespace std;

int main(void)
{
	//1.�鿴ռ���ڴ��С
	int arr[2][3] = { {1,2,3},{4,5,6} };

	//�����ά����ռ���ڴ�
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;
	
	//���� ����
	cout << "��ά����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.�鿴��ά�����ڴ��ַ
	cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ���׵�ַ��" << arr[0] << endl;
	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
	cout << "��ά����ڶ����׵�ַ��" << arr[1] << endl;

	//��ַ����
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