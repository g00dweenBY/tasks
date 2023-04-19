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
   
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };
	int count = 0;




	for (int i = 0; i < length - 1; ++i)
	{
		int smallIndex = i;
		for (int currentIndex = i + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallIndex])
				smallIndex = currentIndex;
		}
		swap(array[i], array[smallIndex]);
	}


	for (int i = 0; i < length; ++i)
		cout << "value array = " << array[i] << endl;
	cout << "Count = " << count << endl;





	/*
	* for (int i = 0; i < length - 1; ++i)
	{
		int smallestIndex = i;
		for (int currentIndex = i + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
			++count;
		}
		swap(array[i], array[smallestIndex]);
	}
	
	*/





	return 0;	

}	