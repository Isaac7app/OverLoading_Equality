#ifndef OVERLOADING_H
#define OVERLOADING_H

#include <compare>
#include <ostream>

using namespace std;

class Length
{
public:
	Length(int value);
	bool operator==(const Length& other) const;
	strong_ordering operator<=>(const Length& other) const;

	int getValue() const;
	void setValue(int value); 


private:
	int value;
};

ostream &operator<<(ostream& stream,const Length& lenght);


#endif // OVERLOADING_H
