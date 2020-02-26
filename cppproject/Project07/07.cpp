//2577

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(void)
{
	int a, b, c;
	int compute_num;
	int num[10] = { 0 };

	cin >> a >> b >> c;
	compute_num = a * b * c;

	while (compute_num != 0) {
		num[compute_num % 10] += 1;
		compute_num /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << num[i] << endl;

	return 0;
}