#ifndef STORYLINE_H_GUARD
#define STORYLINE_H_GUARD

#include "Situation.h"
#include "Choice.h"

class Storyline
{
protected:
	Character* hero;
	virtual std::string getStoryBeginning() = 0;
	virtual Choice* getChoiceOne() = 0;
	virtual Choice* getChoiceTwo() = 0;

public:
	Storyline(Character* hero)
	{
		this->hero = hero;
	}

	Situation* getStoryline()
	{
		std::string storyBeginning = getStoryBeginning();
		Choice* choiceOne = getChoiceOne();
		Choice* choiceTwo = getChoiceTwo();

		std::vector<Choice*> possibleChoices;
		possibleChoices.push_back(choiceOne);
		possibleChoices.push_back(choiceTwo);

		return new Situation(this->hero, storyBeginning, possibleChoices);
	}
};

#endif