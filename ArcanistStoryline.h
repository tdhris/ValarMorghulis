#ifndef ARCANISTSTORYLINE_H_GUARD
#define ARCANISTSTORYLINE_H_GUARD

#include "Storyline.h"


class ArcanistStoryline : public Storyline
{
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
	ArcanistStoryline(Character* hero) : Storyline(hero) {}
};

#endif