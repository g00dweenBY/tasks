/*
----------------------------------------------------------------------------------------
Сортировка методом выбора  от наименьшего к большему

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
----------------------------------------------------------------------------------------
*/