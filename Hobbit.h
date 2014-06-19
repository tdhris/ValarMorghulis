#ifndef HOBBIT_H_GUARD
#define HOBBIT_H_GUARD

#include <string>
#include "character.h"

class Hobbit : public Character
{
public:
	Hobbit (std::string name, Gender gender);
	std::string getNickname() const;
	Race getRace() const;
};

#endif
