#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

void main()
{
	int num;
	int a[1000];

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}

	int temp = 0;
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			if (a[j] < a[i]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++)
		cout << a[i] << endl;

}