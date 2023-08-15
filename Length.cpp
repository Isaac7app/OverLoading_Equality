#include "Length.h"
#include <ostream>


Length::Length(int value) : value{value}
{
}

bool Length::operator==(const Length& other) const
{
	return value == other.value;
}

int Length::getValue() const
{
	return value;
}

void Length::setValue(int value)
{
	this->value = value;
}

strong_ordering Length::operator<=>(const Length& other) const
{
	return value <=> other.value;
}

ostream &operator<<(ostream& stream, const Length& lenght)
{
	stream << lenght.getValue();
	return stream;
}
