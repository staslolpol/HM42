#include "logic.h"

int main() {
	int array[]{ 1,2,3,4,5,5,4,3,2,1};
	int length = 10;

	string msg = mirror_vector(array, length) ? "The vector mirror"
		: "The vector not mirror";

	cout << msg;

	return 0;
}