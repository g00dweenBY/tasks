/*
----------------------------------------------------------------------------------------
—ортировка методом выбора  от наименьшего к большему

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

	—ортировка методом выбора от большего к наименьшему

for (int i = 0; i < length - 1; ++i)
	{
		int smallIndex = i;
		for (int currentIndex = i + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] > array[smallIndex])
			{
				smallIndex = currentIndex;
			}
		}
		swap(array[i], array[smallIndex]);
	}
----------------------------------------------------------------------------------------

============================================================================================

—ортировка пузырьком от наименьшего к большему

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

	-------------------
	—ортировка пузырьком от большего к меньшему
	for (int i = 0; i < length - 1; ++i)
	{
		for (int currentIndex = 0; currentIndex < length - 1; ++currentIndex)
		{
			if (array[currentIndex] < array[currentIndex + 1])
			{
				swap(array[currentIndex], array[currentIndex + 1]);
			}
			++count;
		}
	}



---------------------------------------------------------
”лучшенный алгортим, которые проходит меньшее количество итераций


const int length(9);
	int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	int count = 0;

	for (int iteration = 0; iteration < length - 1; ++iteration)
	{
		int endOfArrayIndex(length - iteration);
		bool swapped(false);

		for (int currentIndex = 0; currentIndex < endOfArrayIndex - 1; ++currentIndex)
		{
			if (array[currentIndex] > array[currentIndex + 1])
			{
				swap(array[currentIndex], array[currentIndex + 1]);
				swapped = true;
			}
		}
		if (!swapped)
			cout << " оличество итераций: " << iteration + 1 << endl;
	}


	for (int i = 0; i < length; ++i)
		cout << "value array = " << array[i] << endl;
============================================================================================

*/