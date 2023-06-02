#include <iostream>
#include <fstream>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <cstring>
#include <array>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cmath>
#include "math.h"
#include <cctype>
#include <functional>
#include "namesp.h"
#include <new>
#include <cstdarg>
#include <cassert>


class Stack
{
private:
	int m_arr[10];
	int m_next;
public:
	void reset()
	{
		m_next = 0;
		for (int i = 0; i < 10; ++i)
			m_arr[i] = 0;
	}
	bool push(int value)
	{
		if (m_next == 10)
			return false;
		m_arr[m_next++] = value;
		return true;
	}
	int pop()
	{
		assert(m_next > 0);
		return m_arr[--m_next];
	}
	void print()
	{
		std::cout << "( ";
		for (int i = 0; i < m_next; ++i)
			std::cout << m_arr[i] << " ";
		std::cout << ")\n";
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Stack stack;
	stack.reset();

	stack.push(5);
	stack.print();

	stack.push(44);
	stack.push(22);
	stack.push(33);
	stack.print();
	stack.pop();
	stack.print();
	
	
	return 0;
}
// =================================================================================












