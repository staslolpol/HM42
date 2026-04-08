#include "util.h"

int main() {
	srand(time(NULL));
	int array[DEFAUT_SIZE];
	int size = 20;

	cout << "Input size: ";
	cin >> size;

	init_rnd(array, size, -10, 10);

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << "\n" << quantity(array, size);

	return 0; 
}