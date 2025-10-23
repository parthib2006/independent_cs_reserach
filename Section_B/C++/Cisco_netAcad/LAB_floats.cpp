#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x,y;
	float x2,pi2;

	cout << "Enter value for x: ";
	cin >> x;

	x2 = pow(x,2);
	pi2 = pow(pi,2);

	y = x2/((pi2*(x2+0.5)));
    y = y * (1 + x2 / (pi2 * pow(x2-0.5,2)));
	
	cout << "y = " << y << endl;
	return 0;
}