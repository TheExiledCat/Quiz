#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
class Question
{
public:

	Question(std::string someQuestionText, std::vector<std::string> someAnswers, int theRightAnswerIndex);
	~Question();

	void SetRightAnswer(int theRightAnswerIndex);

	int GetRightAnswer();

	std::vector<std::string>GetAnswers();
	std::string GetQuestionText();

private:
	int rightAnswerIndex;

	std::vector<std::string> answers;
	std::string questionText;


};

