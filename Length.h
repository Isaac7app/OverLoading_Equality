#ifndef OVERLOADING_H
#define OVERLOADING_H

class Length
{
public:
	// Constructor
	explicit Length(int value);

	// Equality Operators
	bool operator ==(const Length& other) const;

	bool operator ==(int other) const;
	bool operator !=(int other) const;

	//Comaparison Operators
	bool operator <(const Length& other) const;
	bool operator <=(const Length& other) const;
	bool operator >(const Length& other) const;
	bool operator >=(const Length& other) const;


private:
	int value;
};


#endif // OVERLOADING_H
