#ifndef ARCANIST_H_GUARD
#define ARCANIST_H_GUARD

#include <string>
#include "Character.h"


enum class ArcanistArt
{
	Naming,
	Sympathy,
	Artificery,
	Alchemy
};

class Arcanist : public Character
{
private:
	ArcanistArt art;
public:
	Arcanist (std::string name, Gender gender, ArcanistArt art) : Character(name, gender)
	{
		this->art = art;
	}

	std::string getNickname() const
	{
		return "Arcanist " + this->name;
	}

	Race getRace() const
	{
		return Race::Arcanist;
	}
};

#endif