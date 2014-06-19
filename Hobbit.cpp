#include "Hobbit.h"


Hobbit::Hobbit(std::string name, Gender gender) : Character(name, gender) {}

std::string Hobbit::getNickname() const
{
	return "Hobbit " + this->name;
}

Race Hobbit::getRace() const
{
	return Race::Hobbit;
}
