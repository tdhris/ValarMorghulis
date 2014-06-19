#ifndef SITATION_H_GUARD
#define SITATION_H_GUARD

#include <iostream>
#include <vector>
#include "Character.h"

class Choice;

class Situation
{
private:
	Character* hero;
	std::string description;
	std::vector<Choice*> possibleChoices;
	std::string getQuestion() const;
	std::string getChoicesString() const;
	Choice* Situation::getChoice(int choiceIndex) const;

public:
	Situation(Character* hero, std::string description);
	Situation(Character* hero, std::string description, std::vector<Choice*> possibleChoices);
	std::string getChoiceDescription(int choiceIndex) const;
	Situation* getChoiceConsequence(int choiceIndex) const;
	void addChoice(std::string description, Situation* consequence);
	std::string toString() const;
	std::string getDescription() const;
	bool deadEndSituation() const;
	~Situation(void);
};

#endif
