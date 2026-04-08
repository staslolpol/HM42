#include "logic.h"

int search_position(int array[], int length) {
	int result = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] > 0) {
			result += 1;
		}
	}

	return result;
}

int search_negative(int array[], int length) {
	int result = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] < 0) {
			result += 1;
		}
	}

	return result;
}

int search_zero(int array[], int length) {
	int result = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] == 0) {
			result += 1;
		}
	}

	return result;
}

string quantity(int array[], int length) {
	string result = "";

	result += "The position: " + to_string(search_position(array, length)) + "\n";
	result += "The negative: " + to_string(search_negative(array, length)) + "\n";
	result += "The zero: " + to_string(search_zero(array, length)) + "\n";

	return result;
}