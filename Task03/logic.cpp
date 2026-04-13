#include "logic.h"

bool mirror_vector(int array[], int length) {
	bool result = true;
	for (int i = 0; i < length; i++)
	{
		if (array[i] != array[length - i - 1]) {
			result = false;
		}
	}

	return result;
}
