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
	virtual Choice* getChoiceOneOne() = 0;
	virtual Choice* getChoiceOneTwo() = 0;
	virtual Choice* getChoiceOneThree() = 0;
	virtual Choice* getChoiceOneOneOne() = 0;
	virtual Choice* getChoiceOneOneTwo() = 0;
	virtual Choice* getChoiceOneOneOneOne() = 0;
	virtual Choice* getChoiceOneOneOneTwo() = 0;
	virtual Choice* getChoiceOneTwoOne() = 0;
	virtual Choice* getChoiceOneTwoTwo() = 0;
	virtual Choice* getChoiceOneTwoOneOne() = 0;
	virtual Choice* getChoiceOneTwoOneTwo() = 0;
	virtual Choice* getChoiceOneThreeOne() = 0;
	virtual Choice* getChoiceOneThreeTwo() = 0;

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