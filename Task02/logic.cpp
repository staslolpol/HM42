#include "logic.h"

bool ordered_vector(int array[], int length) {
	bool result = true;

	for (int i = 0; i < length; i++)
	{
		if (array[i] < array[i - 1]) {
			result = false;
		}
	}

	return result;
}
