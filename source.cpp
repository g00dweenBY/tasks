#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <array>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

string global_str;



int main()
{	
	setlocale(LC_ALL, "Russian");
   
	const int length(9);
	int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	int count = 0;





	for (int i = 0; i < length - 1; ++i)
	{
		for (int currentIndex = 0; currentIndex < length - 1; ++currentIndex)
		{
			if (array[currentIndex] > array[currentIndex + 1])
			{
				swap(array[currentIndex], array[currentIndex + 1]);
			}
			++count;
		}
	}


	for (int i = 0; i < length; ++i)
		cout << "value array = " << array[i] << endl;

	cout << "cout = " << count << endl;




	





	return 0;	

}	