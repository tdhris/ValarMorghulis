#include "Wizard.h"


Wizard::Wizard (std::string name, Gender gender, HogwartsHouse house) : Character(name, gender)
{
		this->house = house;
}

std::string Wizard::houseToString() const
{
	{
		std::string house;
		switch(this->house)
		{
		case 0:
			house = "Gryffindor";
			break;
		case 1:
			house = "Slytherin";
			break;
		case 2:
			house = "Ravenclaw";
			break;
		case 3:
			house = "Hufflepuff";
			break;
		}
		return house;
	}
}

std::string Wizard::getNickname() const
{
	return this->name + " of " + this->houseToString();
}

Race Wizard::getRace() const
{
	return Race::Wizard;
}

HogwartsHouse Wizard::getHouse() const
{
	return this->house;
}
