#include <iostream>

using namespace std;

int main(void) {

	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

	// p points to the beginning of the vector
	int *p = vector;
	// we assume that the first element is mininal
	int min = *p;
	// skip to next element
	p++;
	// iterate thru n-1 elements
	for(int i = 1; i < n; i++) {
		// if current element if less than current minimal...
		if(*p < min)
			// update min
			min = *p;
		// skip to next element
		p++;
	}
	cout << min << endl;
	return 0;
}