#include "Question.h"

Question::Question(std::string someQuestionText, std::vector<std::string> someAnswers, int theRightAnswerIndex)
{
	questionText = someQuestionText;
	answers = someAnswers;
	rightAnswerIndex = theRightAnswerIndex;
}

Question::~Question()
{
}


void Question::SetRightAnswer(int theRightAnswerIndex)
{
	rightAnswerIndex = theRightAnswerIndex;
}

int Question::GetRightAnswer()
{
	return rightAnswerIndex;
}

std::vector<std::string> Question::GetAnswers()
{

	return answers;
}

std::string Question::GetQuestionText()
{
	return questionText;
}
