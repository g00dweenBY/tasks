#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <array>
#include <cstdlib>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

string global_str;



int main()
{	
	setlocale(LC_ALL, "Russian");
    int scores[] = { 73, 85, 84, 44, 78 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);

    int maxScore = 0; // отслеживаем самую высокую оценку
    int index = 0;
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > maxScore)
        {
            index = student;
            maxScore = scores[student];
        }

    std::cout << "The best score was " << maxScore << " has index " << index << '\n';




	return 0;	

}	