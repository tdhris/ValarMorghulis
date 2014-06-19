#ifndef ARCANIST_H_GUARD
#define ARCANIST_H_GUARD

#include <string>
#include "Character.h"


class Arcanist : public Character
{
public:
	Arcanist (std::string name, Gender gender) : Character(name, gender)
	{
	}

	std::string getNickname() const
	{
		return "";
	}

	Race getRace() const
	{
		return Race::Arcanist;
	}
};

#endif