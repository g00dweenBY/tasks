#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <array>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

struct Advertising
{
	int notification;
	double percentageOfUsers;
	double earnings;
};

void printAdvertising(Advertising advertising)
{
	cout << "ќбъ€влений показано пользовател€м: " << advertising.notification << endl;
	cout << "ѕроцент посетителей, нажавших на объ€вление: " << advertising.percentageOfUsers << endl;
	cout << "—редний заработок за каждое нажатие юзера на объ€вление: " << advertising.earnings << endl;

	double sumEarning =  (advertising.notification * advertising.percentageOfUsers /100 * advertising.earnings);

	cout << "—колько денег вы заработали за день: " << sumEarning << endl;
}



string global_str;
int main()
{	
	setlocale(LC_ALL, "Russian");
	


	Advertising myEarnings;

	cout << "—колько объ€влений вы показали посетител€м: ";
	cin >> myEarnings.notification;
	cout << "—колько процентов посетителей нажали на объ€вление: ";
	cin >> myEarnings.percentageOfUsers;
	cout << "—колько вы заработали в среднем на каждое объ€вление: ";
	cin >> myEarnings.earnings;

	printAdvertising(myEarnings);
	
	return 0;	

}	