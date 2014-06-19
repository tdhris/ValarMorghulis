#ifndef CHOICE_H_GUARD
#define CHOICE_H_GUARD

#include <iostream>

class Situation;

class Choice
{
private:
	std::string description;
	Situation* consequence;
public:
	Choice()
	{
		this->description = "";
		this->consequence = NULL;
	}
	
	Choice(std::string description, Situation* consequence)
	{
		this->description = description;
		this->consequence = consequence;
	}

	std::string getDesription() const
	{
		return this->description;
	}

	Situation* getConsequence() const
	{
		return this->consequence;
	}
};

#endif