#ifndef CHARACTER_H_GUARD
#define CHARACTER_H_GUARD

#include <string>

enum class Gender
{
	Male,
	Female,
};

enum class Race
{
	Wizard,
	Hobbit,
	Arcanist,
};

class Character
{
protected:
	std::string name;
	Gender gender;

public:
	Character(std::string characterName, Gender characterGender)
	{
		this->name = characterName;
		this->gender = characterGender;
	}

	std::string getName() const
	{
		return this->name;
	}

	Gender getGender() const
	{
		return this->gender;
	}

	virtual Race getRace() const = 0;
	virtual std::string getNickname() const = 0;
};

#endif
