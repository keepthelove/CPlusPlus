#include<iostream>
using namespace std;

//冒泡排序
int main(void)
{
	int arr[] = { 50,12,35,94,56,31,12,45,60 };

	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		int idx = 0;
		for (int j = 0; j < len - i; j++) {
			if (arr[idx] < arr[j]) {
				idx = j;
			}
		}

		//交换最大值
		int tmp = arr[len - i - 1];
		arr[len - i - 1] = arr[idx];
		arr[idx] = tmp;
	}

	//打印数组
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";

	system("pause");
	return 0;
}