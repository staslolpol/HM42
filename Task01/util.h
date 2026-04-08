#include "logic.h"


void print(string s) {
	cout << s;
}

void init_rnd(int array[], int length, int a, int b) {
	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1);
	}

}