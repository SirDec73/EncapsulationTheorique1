#ifndef INTEGER_H__
#define INTEGER_H__

class Integer {
	int number;
public:
	Integer();
	Integer(int);
	int GetNumber();
	Integer operator+(const Integer&);
	void operator+=(const Integer&);
	Integer operator-(const Integer&);
	void operator-=(const Integer&);
	Integer operator*(const Integer&);
	void operator*=(const Integer&);
	Integer operator/(const Integer&);
	void operator/=(const Integer&);
	Integer operator%(const Integer&);
	void operator%=(const Integer&);
	void operator<<(const Integer&);

	void pow(int);
};

#endif // !INTEGER_H__

