#include<iostream>
using namespace std;

/*
	����������
		����ֻ�����ص���һ����ʹ������
*/
int main(void) 
{
	int arr[5] = { 100,200,300,350,400 };

	int maxWeight = arr[0];
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) 
	{
		if (maxWeight < arr[i])
			maxWeight = arr[i];
	}

	cout << "����Ԫ��Ϊ��" << maxWeight << endl;

	system("pause");
	return 0;
}