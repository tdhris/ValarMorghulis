#ifndef HOBBITSTORYLINE_H_GUARD
#define HOBBITSTORYLINE_H_GUARD

#include "Storyline.h"

class HobbitStoryline :
	public Storyline
{
protected:
	protected:
	std::string getStoryBeginning();
	Choice* getChoiceOne();
	Choice* getChoiceTwo();
	Choice* getChoiceOneOne();
	Choice* getChoiceOneTwo();
	Choice* getChoiceOneThree();
	Choice* getChoiceOneOneOne();
	Choice* getChoiceOneOneTwo();
	Choice* getChoiceOneOneOneOne();
	Choice* getChoiceOneOneOneTwo();
	Choice* getChoiceOneTwoOne();
	Choice* getChoiceOneTwoTwo();
	Choice* getChoiceOneTwoOneOne();
	Choice* getChoiceOneTwoOneTwo();
	Choice* getChoiceOneThreeOne();
	Choice* getChoiceOneThreeTwo();
public:
	HobbitStoryline(Character* hero) : Storyline(hero) {}
};

#endif