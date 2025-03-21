#include<iostream>
using namespace std;

/*
	案例描述：
		请声明一个5个元素的数组，并将元素逆置
			如原来数组为{1,2,3,4,5},逆置后为{5,4,3,2,1}
*/
int main(void)
{
	int arr[5] = { 2,5,9,6,3 };

	int len = sizeof(arr) / sizeof(int);
	int start = 0;
	int end = len - 1;

	while (start < end) 
	{
		int tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;

		start++;
		end--;
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}