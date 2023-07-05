#ifndef OVERLOADING_H
#define OVERLOADING_H

class Length
{
public:
	explicit Length(int value);
	bool operator ==(const Length& other) const;
	bool operator ==(int other) const;
	bool operator !=(int other) const;


private:
	int value;
};


#endif // OVERLOADING_H
