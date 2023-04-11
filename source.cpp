#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"



string global_str;
int main()
{	
	setlocale(LC_ALL, "Russian");

	string line, resultLine;
	while (getline(cin, line))
	{
		resultLine += line;
		cout << "Результирующая строка :" << resultLine ;
	}
		
	


	return 0;	

}	