#include <iostream>
#include <math.h>


using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");
	double dX = 0.0, dY = 0.0, dZ = 0.0;
	cout << "������� X: ";
	cin >> dX;
	cout << "\n������� Y: ";
	cin >> dY;
	cout << "\n������� Z: ";
	cin >> dZ;

	double dVectorLength = sqrt(dX * dX + dY * dY + dZ * dZ);
	cout << "\n����� ������� = " << dVectorLength << endl;

	return 0;
}