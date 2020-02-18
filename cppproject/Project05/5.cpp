#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
	int num1 = 0, num2 = 0, num2_copy = 0;;
	int compute1 = 0, compute2 = 0, compute3 = 0;
	int num3 = 0, num4 = 0, num5 = 0, num6 = 0;

	cin >> num1 >> num2;
	num2_copy = num2;

	compute1 = num2 / 100;	//3
	num2 = num2 - (compute1 * 100);

	compute2 = num2 / 10;		//8
	num2 = num2 - (compute2 * 10);

	compute3 = num2;	//5

	num3 = num1 * compute3;
	num4 = num1 * compute2;
	num5 = num1 * compute1;
	num6 = num1 * num2_copy;

	cout << num3 << endl << num4 << endl << num5 << endl << num6 << endl;
}