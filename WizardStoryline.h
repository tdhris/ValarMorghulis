#ifndef WIZARDSTORYLINE_H_GUARD
#define WIZARDSTORYLINE_H_GUARD

#include "Storyline.h"

class WizardStoryline : public Storyline
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
	WizardStoryline(Character* hero) : Storyline(hero) {}
};

#endif
