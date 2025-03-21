#include<iostream>
using namespace std;

/*
	案例描述：
		求五只猪最重的那一个，使用数组
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

	cout << "最大的元素为：" << maxWeight << endl;

	system("pause");
	return 0;
}