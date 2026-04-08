#include "logic.h"

int main() {
	int array[]{1,2,3,5,4,6,7,10,9,8};
	int length = 10;
	
	string msg = ordered_vector(array, length) ? "The vector  ordered"
		: "The not vector ordered";

	cout << msg;

	return 0;
}