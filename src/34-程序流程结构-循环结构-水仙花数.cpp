#include<iostream>
#include<math.h>
using namespace std;

//水仙花数指的是每个数位上的数的三次方之和等于本身

int main(void) {
	int num;
	cin >> num;
	int sum = 0;

	int tmp = num;
	while (tmp) {
		sum += pow(tmp % 10, 3);
		tmp /= 10;
	}

	if (sum == num)
		cout << "Yes,是水仙花数" << endl;
	else
		cout << "No,不是水仙花数" << endl;

	system("pause");

	return 0;
}