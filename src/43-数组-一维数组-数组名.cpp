#include<iostream>
using namespace std;

/*
һά����������;
1.����ͳ�������������ڴ��еĳ���
2.���Ի�ȡ�������ڴ��е��׵�ַ
*/

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };//tips��int������64λ����ϵͳռ4���ֽ�
	cout << "����size��" << sizeof(arr) << endl;//inference sizeof�Ľ����λΪ�ֽ�

	//�����׵�ַ
	cout << "������address��" << arr << endl;
	cout << "�����һ��Ԫ��address��" << &arr[0] << endl;
	cout << "����ڶ���Ԫ��address��" << &arr[1] << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << "����Ԫ�ص�ַ��" << &(arr[i]) << endl;

	//�������ǳ����������Խ��и�ֵ����
	int* b = arr;

	b[0] = 100;
	arr[0] = 50;
	cout << "b:" << b[0] << endl;
	cout << "arr[0]:" << arr[0] << endl;

	system("pause");
	return 0;
}