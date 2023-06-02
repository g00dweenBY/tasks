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
 ======================================================================================
*/