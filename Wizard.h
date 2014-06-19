#ifndef WIZARD_H_GUARD
#define WIZARD_H_GUARD

#include <string>
#include "Character.h"

enum class HogwartsHouse
{
	Gryffindor,
	Slytherin,
	Ravenclaw,
	Hufflepuff,
};

class Wizard : public Character
{
private:
	HogwartsHouse house;
	std::string houseToString() const;

public:
	Wizard(std::string name, Gender gender, HogwartsHouse house);
	HogwartsHouse getHouse() const;
	std::string getNickname() const;
	Race getRace() const;
};

#endif