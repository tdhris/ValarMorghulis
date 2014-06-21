#include "HobbitStoryline.h"
#include "FileReader.h"

const std::string HOBBITPATH = "storyline/hobbit/";

std::string HobbitStoryline::getStoryBeginning()
{
	std::string storyBeginning = "You, " + this->hero->getNickname();
	std::string beginning = filereader::getFileString(HOBBITPATH + "hobbit0.txt");
	storyBeginning.append(beginning);
	return storyBeginning;
}
Choice* HobbitStoryline::getChoiceOne()
{
	std::string choiceOne = "You pick up the ring, for it is too pretty for you to leave there in the dirt.";
	std::string desciprionOne = filereader::getFileString(HOBBITPATH + "hobbit01.txt");

	Choice* one = getChoiceOneOne();
	Choice* two = getChoiceOneTwo();

	std::vector<Choice*> possibleChoicesOne;
	possibleChoicesOne.push_back(one);
	possibleChoicesOne.push_back(two);
	
	Situation* consequenceOne = new Situation(this->hero, desciprionOne, possibleChoicesOne);
	return new Choice(choiceOne, consequenceOne);
}

Choice* HobbitStoryline::getChoiceTwo()
{
	std::string choiceTwo = "You leave the ring in the dirt. You like your life simple, without any strange rings in it.";
	Situation* consequenceTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit02.txt"));
	return new Choice(choiceTwo, consequenceTwo);
}


Choice* HobbitStoryline::getChoiceOneOne()
{
	std::string choiceTwo = "You take a breath and decide to join the men around the fire.";
	Situation* consequenceTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit011.txt"));
	return new Choice(choiceTwo, consequenceTwo);
}

Choice* HobbitStoryline::getChoiceOneTwo()
{
	std::string choiceTwo = "Those men are too scary for you. It would be safer back in the woods.";
	Situation* consequenceTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit012.txt"));
	return new Choice(choiceTwo, consequenceTwo);
}
