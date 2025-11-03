#include <iostream>
#include <cmath>
using namespace std;
int main(void) {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean = 0.;
	double HarmonicMean = 0.;
	double GeometricMean = 0.;
	double RootMeanSquare = 0.;
    double sum = 0.;
    double s_sum = 0.;
    double inv_sum = 0.;
    double product = 1.;

	for(int i=0; i<n; i++){
        sum += vector[i];
        product *= vector[i];
        s_sum += pow(vector[i], 2);
        inv_sum += 1/vector[i];
    }

    ArithmeticMean = sum*(1.0/n);
    HarmonicMean = n/inv_sum;
    GeometricMean = pow(product, 1.0/n);
    RootMeanSquare = pow((s_sum/n), 0.5);


	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}