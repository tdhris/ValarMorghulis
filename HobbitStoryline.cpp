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
	std::string choiceOne = "You step thought the archway, of course. You can't leave such an adventure to someone else!";
	std::string desciprionOne = filereader::getFileString(HOBBITPATH + "hobbit01.txt");

	Choice* one = getChoiceOneOne();
	Choice* two = getChoiceOneTwo();
	Choice* three = getChoiceOneThree();

	std::vector<Choice*> possibleChoicesOne;
	possibleChoicesOne.push_back(one);
	possibleChoicesOne.push_back(two);
	possibleChoicesOne.push_back(three);

	Situation* consequenceOne = new Situation(this->hero, desciprionOne, possibleChoicesOne);
	return new Choice(choiceOne, consequenceOne);
}

Choice* HobbitStoryline::getChoiceTwo()
{
	std::string choiceTwo = "You leave the chamber, go to your office and use the floo network to call your boss.";
	Situation* consequenceTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit02.txt"));
	return new Choice(choiceTwo, consequenceTwo);
}

Choice* HobbitStoryline::getChoiceOneOne()
{
	std::string ChoiceOneOne = "You agree to help Robb Stark and his poor father. You cannot stand the thought of the injustice done to them.";
	std::string descriptionOneOne = filereader::getFileString(HOBBITPATH + "hobbit011.txt");
	
	Choice* one = getChoiceOneOneOne();
	Choice* two = getChoiceOneOneTwo();

	std::vector<Choice*> possibleChoicesOneOne;
	possibleChoicesOneOne.push_back(one);
	possibleChoicesOneOne.push_back(two);

	Situation* consequenceOneOne = new Situation(this-> hero, descriptionOneOne, possibleChoicesOneOne);
	return new Choice(ChoiceOneOne, consequenceOneOne);
}

Choice* HobbitStoryline::getChoiceOneTwo()
{
	std::string ChoiceOneTwo = "You agree to help Robb Stark and go to King's Landing... for a price. Food does not grow on trees in this place.";
	std::string descriptionOneTwo = filereader::getFileString(HOBBITPATH + "hobbit012.txt");

	Choice* one = getChoiceOneTwoOne();
	Choice* two = getChoiceOneTwoTwo();

	std::vector<Choice*> possibleChoicesOneTwo;
	possibleChoicesOneTwo.push_back(one);
	possibleChoicesOneTwo.push_back(two);

	Situation* consequenceOneTwo = new Situation(this-> hero, descriptionOneTwo, possibleChoicesOneTwo);
	return new Choice(ChoiceOneTwo, consequenceOneTwo);
}

Choice* HobbitStoryline::getChoiceOneThree()
{
	std::string ChoiceOneThree = "You refuse. Muggle affairs are not your business!";
	std::string descriptonOneThree = filereader::getFileString(HOBBITPATH + "hobbit013.txt");

	Choice* one = getChoiceOneThreeOne();
	Choice* two = getChoiceOneThreeTwo();

	std::vector<Choice*> possibleChoicesOneThree;
	possibleChoicesOneThree.push_back(one);
	possibleChoicesOneThree.push_back(two);

	Situation* consequenceOneThree = new Situation(this-> hero, descriptonOneThree, possibleChoicesOneThree);
	return new Choice(ChoiceOneThree, consequenceOneThree);
}

Choice* HobbitStoryline::getChoiceOneOneOne()
{
	std::string choiceOneOneOne = "You follow the little boy who seems harmless enough anyway.";
	std::string descriptionOneOneOne = filereader::getFileString(HOBBITPATH + "hobbit0111.txt");

	Choice* one = getChoiceOneOneOneOne();
	Choice* two = getChoiceOneOneOneTwo();

	std::vector<Choice*> possibleChoicesOneOneOne;
	possibleChoicesOneOneOne.push_back(one);
	possibleChoicesOneOneOne.push_back(two);

	Situation* consequenceOneOneOne = new Situation(this-> hero, descriptionOneOneOne, possibleChoicesOneOneOne);
	return new Choice(choiceOneOneOne, consequenceOneOneOne);
}

Choice* HobbitStoryline::getChoiceOneOneTwo()
{
	std::string choiceOneOneTwo = "You refuse the boy's offer. You don't want to have anything to do with his master";
	Situation* consequenceOneOneTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit0112.txt"));
	return new Choice(choiceOneOneTwo, consequenceOneOneTwo);
}

Choice* HobbitStoryline::getChoiceOneOneOneOne()
{
	std::string choiceOneOneOneOne = "You agree to go to Pentos. You are tired of the Seven Kingdoms anyway. Maybe they have a floo network in Pentos.";
	Situation* consequenceOneOneOneOne = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit01111.txt"));
	return new Choice(choiceOneOneOneOne, consequenceOneOneOneOne);
}


Choice* HobbitStoryline::getChoiceOneOneOneTwo()
{
	std::string choiceOneOneOneTwo = "You refuse to go to Pentos. You have given your word that you will save Lord Eddard Stark!";
	Situation* consequenceOneOneOneTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit0112.txt"));
	return new Choice(choiceOneOneOneTwo, consequenceOneOneOneTwo);
}

Choice* HobbitStoryline::getChoiceOneTwoOne()
{
	std::string choiceOneTwoOne = "You follow the beautiful woman. She seems harmless enough anyway.";
	std::string descriptionOneTwoOne = filereader::getFileString(HOBBITPATH + "hobbit0121.txt");

	Choice* one = getChoiceOneTwoOneOne();
	Choice* two = getChoiceOneTwoOneTwo();

	std::vector<Choice*> possibleChoicesOneTwoOne;
	possibleChoicesOneTwoOne.push_back(one);
	possibleChoicesOneTwoOne.push_back(two);

	Situation* consequenceOneOneOne = new Situation(this-> hero, descriptionOneTwoOne, possibleChoicesOneTwoOne);
	return new Choice(choiceOneTwoOne, consequenceOneOneOne);
}

Choice* HobbitStoryline::getChoiceOneTwoTwo()
{
	std::string choiceOneTwoTwo = "You refuse to follow the beautiful woman. She and her master seem rather suspicious.";
	Situation* consequenceOneTwoTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit0112.txt"));
	return new Choice(choiceOneTwoTwo, consequenceOneTwoTwo);
}

Choice* HobbitStoryline::getChoiceOneTwoOneOne()
{
	std::string choiceOneTwoOneOne = "You accept Baelish's offer. You owe Robb Stark no love or loyalty.";
	Situation* consequenceOneTwoOneOne = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit01211.txt"));
	return new Choice(choiceOneTwoOneOne, consequenceOneTwoOneOne);
}
Choice* HobbitStoryline::getChoiceOneTwoOneTwo()
{
	std::string choiceOneTwoOneTwo = "You refuse Baelish's offer. This guy doesn't seem like someone you would want to trust.";
	Situation* consequenceOneTwoOneTwo = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit0112.txt"));
	return new Choice(choiceOneTwoOneTwo, consequenceOneTwoOneTwo);
}

Choice* HobbitStoryline::getChoiceOneThreeOne()
{
	std::string choiceOneThreeOne = "You could not care less if this nutjob's last name is Snow or Bolton. You agree.";
	Situation* consequenceOneThreeOne = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit0131.txt"));
	return new Choice(choiceOneThreeOne, consequenceOneThreeOne);
}

Choice* HobbitStoryline::getChoiceOneThreeTwo()
{
	std::string choiceOneThreeOne = "You would never misuse magic in such a way. That is something only a Death Eater would do. You refuse.";
	Situation* consequenceOneThreeOne = new Situation(this-> hero, filereader::getFileString(HOBBITPATH + "hobbit0132.txt"));
	return new Choice(choiceOneThreeOne, consequenceOneThreeOne);
}

