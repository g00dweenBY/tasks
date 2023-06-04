/*
* ======================================================================================
	
	class Numbers
{
	int m_a;
	int m_b;
	int m_c;
public:
	void setValues(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	void print()
	{
		std::cout << "<" << m_a << ", " << m_b << ", " << m_c << ">";
	}

	bool isEqual(const Numbers& d)
	{
		return (m_a == d.m_a && m_b == d.m_b && m_c == d.m_c);
	}
};

	Numbers p1;
	p1.setValues(3, 4, 5);
	Numbers p2;
	p2.setValues(3, 4, 5);
	if (p1.isEqual(p2))
		std::cout << "p1 and p2 are equal\n";
	else
		std::cout << "p1 and p2 are not equal\n";
	Numbers p3;
	p3.setValues(7, 8, 9);

	if (p1.isEqual(p3))
		std::cout << "p1 and p3 are equal\n";
	else
		std::cout << "p1 and p3 are not equal\n";
* ======================================================================================
 ======================================================================================

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
 ======================================================================================
*/