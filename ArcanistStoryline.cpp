#include "ArcanistStoryline.h"
#include "FileReader.h"


const std::string ARCANISTPATH = "storyline/arcanist/";

std::string ArcanistStoryline::getStoryBeginning()
{	
	std::string storyBeginning = "You, " + this->hero->getNickname();
	std::string beginning = filereader::getFileString(ARCANISTPATH + "arcanist0.txt");
	storyBeginning.append(beginning);
	return storyBeginning;
}

Choice* ArcanistStoryline::getChoiceOne()
{
	std::string choiceOne = "You use the Name of Time, of course. How can you leave such power untested?";
	std::string desciprionOne = filereader::getFileString(ARCANISTPATH + "arcanist01.txt");

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

Choice* ArcanistStoryline::getChoiceTwo()
{
	std::string choiceTwo = "You let the name leave you. You know better than to meddle with powers you don't understand.";
	Situation* consequenceTwo = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist02.txt"));
	return new Choice(choiceTwo, consequenceTwo);
}

Choice* ArcanistStoryline::getChoiceOneOne()
{
	std::string ChoiceOneOne = "You agree to help Robb Stark and his poor father. You cannot stand the thought of the injustice done to them.";
	std::string descriptionOneOne = filereader::getFileString(ARCANISTPATH + "arcanist011.txt");
	
	Choice* one = getChoiceOneOneOne();
	Choice* two = getChoiceOneOneTwo();

	std::vector<Choice*> possibleChoicesOneOne;
	possibleChoicesOneOne.push_back(one);
	possibleChoicesOneOne.push_back(two);

	Situation* consequenceOneOne = new Situation(this-> hero, descriptionOneOne, possibleChoicesOneOne);
	return new Choice(ChoiceOneOne, consequenceOneOne);
}

Choice* ArcanistStoryline::getChoiceOneTwo()
{
	std::string ChoiceOneTwo = "You agree to help Robb Stark and go to King's Landing... for a price. Food does not grow on trees in this place.";
	std::string descriptionOneTwo = filereader::getFileString(ARCANISTPATH + "arcanist012.txt");

	Choice* one = getChoiceOneTwoOne();
	Choice* two = getChoiceOneTwoTwo();

	std::vector<Choice*> possibleChoicesOneTwo;
	possibleChoicesOneTwo.push_back(one);
	possibleChoicesOneTwo.push_back(two);

	Situation* consequenceOneTwo = new Situation(this-> hero, descriptionOneTwo, possibleChoicesOneTwo);
	return new Choice(ChoiceOneTwo, consequenceOneTwo);
}

Choice* ArcanistStoryline::getChoiceOneThree()
{
	std::string ChoiceOneThree = "You refuse. Why should you help this lordling? You are Master of the University!";
	std::string descriptonOneThree = filereader::getFileString(ARCANISTPATH + "arcanist013.txt");

	Choice* one = getChoiceOneThreeOne();
	Choice* two = getChoiceOneThreeTwo();

	std::vector<Choice*> possibleChoicesOneThree;
	possibleChoicesOneThree.push_back(one);
	possibleChoicesOneThree.push_back(two);

	Situation* consequenceOneThree = new Situation(this-> hero, descriptonOneThree, possibleChoicesOneThree);
	return new Choice(ChoiceOneThree, consequenceOneThree);
}

Choice* ArcanistStoryline::getChoiceOneOneOne()
{
	std::string choiceOneOneOne = "You follow the little boy who seems harmless enough anyway.";
	std::string descriptionOneOneOne = filereader::getFileString(ARCANISTPATH + "arcanist0111.txt");

	Choice* one = getChoiceOneOneOneOne();
	Choice* two = getChoiceOneOneOneTwo();

	std::vector<Choice*> possibleChoicesOneOneOne;
	possibleChoicesOneOneOne.push_back(one);
	possibleChoicesOneOneOne.push_back(two);

	Situation* consequenceOneOneOne = new Situation(this-> hero, descriptionOneOneOne, possibleChoicesOneOneOne);
	return new Choice(choiceOneOneOne, consequenceOneOneOne);
}

Choice* ArcanistStoryline::getChoiceOneOneTwo()
{
	std::string choiceOneOneTwo = "You refuse the boy's offer. You don't want to have anything to do with his master";
	Situation* consequenceOneOneTwo = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist0112.txt"));
	return new Choice(choiceOneOneTwo, consequenceOneOneTwo);
}

Choice* ArcanistStoryline::getChoiceOneOneOneOne()
{
	std::string choiceOneOneOneOne = "You agree to go to Pentos. You are tired of the Seven Kingdoms anyway. Maybe they have a floo network in Pentos.";
	Situation* consequenceOneOneOneOne = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist01111.txt"));
	return new Choice(choiceOneOneOneOne, consequenceOneOneOneOne);
}


Choice* ArcanistStoryline::getChoiceOneOneOneTwo()
{
	std::string choiceOneOneOneTwo = "You refuse to go to Pentos. You have given your word that you will save Lord Eddard Stark!";
	Situation* consequenceOneOneOneTwo = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist0112.txt"));
	return new Choice(choiceOneOneOneTwo, consequenceOneOneOneTwo);
}

Choice* ArcanistStoryline::getChoiceOneTwoOne()
{
	std::string choiceOneTwoOne = "You follow the beautiful woman. She seems harmless enough anyway.";
	std::string descriptionOneTwoOne = filereader::getFileString(ARCANISTPATH + "arcanist0121.txt");

	Choice* one = getChoiceOneTwoOneOne();
	Choice* two = getChoiceOneTwoOneTwo();

	std::vector<Choice*> possibleChoicesOneTwoOne;
	possibleChoicesOneTwoOne.push_back(one);
	possibleChoicesOneTwoOne.push_back(two);

	Situation* consequenceOneOneOne = new Situation(this-> hero, descriptionOneTwoOne, possibleChoicesOneTwoOne);
	return new Choice(choiceOneTwoOne, consequenceOneOneOne);
}

Choice* ArcanistStoryline::getChoiceOneTwoTwo()
{
	std::string choiceOneTwoTwo = "You refuse to follow the beautiful woman. She and her master seem rather suspicious.";
	Situation* consequenceOneTwoTwo = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist0112.txt"));
	return new Choice(choiceOneTwoTwo, consequenceOneTwoTwo);
}

Choice* ArcanistStoryline::getChoiceOneTwoOneOne()
{
	std::string choiceOneTwoOneOne = "You accept Baelish's offer. You owe Robb Stark no love or loyalty.";
	Situation* consequenceOneTwoOneOne = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist01211.txt"));
	return new Choice(choiceOneTwoOneOne, consequenceOneTwoOneOne);
}
Choice* ArcanistStoryline::getChoiceOneTwoOneTwo()
{
	std::string choiceOneTwoOneTwo = "You refuse Baelish's offer. This guy doesn't seem like someone you would want to trust.";
	Situation* consequenceOneTwoOneTwo = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist0112.txt"));
	return new Choice(choiceOneTwoOneTwo, consequenceOneTwoOneTwo);
}

Choice* ArcanistStoryline::getChoiceOneThreeOne()
{
	std::string choiceOneThreeOne = "You could not care less if this nutjob's last name is Snow or Bolton. You agree.";
	Situation* consequenceOneThreeOne = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist0131.txt"));
	return new Choice(choiceOneThreeOne, consequenceOneThreeOne);
}

Choice* ArcanistStoryline::getChoiceOneThreeTwo()
{
	std::string choiceOneThreeOne = "You would never misuse magic in such a way. That is something only a Death Eater would do. You refuse.";
	Situation* consequenceOneThreeOne = new Situation(this-> hero, filereader::getFileString(ARCANISTPATH + "arcanist0132.txt"));
	return new Choice(choiceOneThreeOne, consequenceOneThreeOne);
}
