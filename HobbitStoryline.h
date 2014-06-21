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
	Choice* getChoiceOneOne();
	Choice* getChoiceOneTwo();
	Choice* getChoiceTwo();

public:
	HobbitStoryline(Character* hero) : Storyline(hero) {}
};

#endif