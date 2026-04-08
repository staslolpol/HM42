#include "logic.h"

bool mirror_vector(int array[], int length) {
	bool result = true;
	//int n = length / 2;
	for (int i = 0; i < length ; i++)
	{
		if (array[i] != array[length - i]) {
			result = false;
		}
	}

	return result;
}
