#include<iostream>
using namespace std;

int main(void)
{
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	int rows = sizeof(scores) / sizeof(scores[0]);
	int cols = sizeof(scores[0]) / sizeof(scores[0][0]);
	for(int i = 0;i < rows;i++)
	{
		float avg = 0;
		for (int j = 0; j < cols; j++)
			avg += scores[i][j];
		cout << avg / cols << endl;
	}

	system("pause");
	return 0;
}