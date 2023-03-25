#include <iostream>
#include <math.h>


using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");
	double dX = 0.0, dY = 0.0, dZ = 0.0;
	cout << "¬ведите X: ";
	cin >> dX;
	cout << "\n¬ведите Y: ";
	cin >> dY;
	cout << "\n¬ведите Z: ";
	cin >> dZ;

	double dVectorLength = sqrt(dX * dX + dY * dY + dZ * dZ);
	cout << "\nƒлина вектора = " << dVectorLength << endl;

	return 0;
}