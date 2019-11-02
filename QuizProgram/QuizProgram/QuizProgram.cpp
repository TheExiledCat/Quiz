// QuizProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include "Question.h"
#include "Player.h"

int main()
{
	std::list<Question*> questions;
	Question* myQ = new Question("Wat is de snelste move in de game?", { "Little mac jab", "Zelda neutral B", "Mario Nair","Game and Watch Up B"}, 0);
	Question anotherQ("Hoeveel karakters zitten nu het spel?", { "75", "73", "60" ,"100"}, 1);
	Question myThirdQ("Wat was het eerste Non-nintendo character dat in smash vertegenwoordig werd?", { "Cloud", "Joker", "Sonic", "Snake"}, 2);
	Question myFourthQ("Hoe heet de creator van super smash bros?", {"Iwada Satoru", "Masahiro Sakurai",  "Shigeru MiyaMoto", "Shuntaro Furukawa" }, 1);
	Question myFifthQ("Hoeveel Fire Emblem Characters zitten er nu in het spel?", { "4", "1", "10", "7" }, 3);
	questions.push_back(myQ);
	questions.push_back(&anotherQ);
	questions.push_back(&myThirdQ);
	questions.push_back(&myFourthQ);
	questions.push_back(&myFifthQ);
	Player* P;
	std::cout << "De super smash bros ultimate  Quiz" << std::endl<<"\n";
	std::cout << "Schrijf het nummer van het goeie antwoord op om door te gaan, er zijn 4 antwoorden" << "\n" << "per vraag en 5 vragen"<<"\n";
	std::cout << "Wat is uw naam?" << "\n"<<":";
	std::string name;
	std::cin >> name;
	P = new Player(0, name);
	P->SetMultiplier(1);
	std::cout << "\n" << "Je naam is  " << name<<"\n";
	while (true) {
		for (Question* q : questions) {
			std::cout << q->GetQuestionText() << "\n"<<"\n";
			int i = 1;
			for (std::string s : q->GetAnswers()) {
				
				std::cout <<i<<". "<< s<< "\n";
				i++;

			}
			std::cout << "\n" << "je hebt nu " << P->GetScore() << " Punt(en)";
			std::cout << "\n" << "Antwoord: ";
			std::string input;
			std::cin >> input;
			int chosenAnswer = std::stoi(input);
			if (chosenAnswer-1 == q->GetRightAnswer()) {
				std::cout<<"\n" << "Correct!" << std::endl;
				P->SetScore(P->GetScore() + 1*P->GetMultiplier());
			}
			else {
				std::cout << "wrong!"<<" Try again" << std::endl;
				P->SetScore(0);
				break;
			}
		}
		if (P->GetScore() == 5) {
			std::cout << "Je hebt elke vraag goed " << P->GetName()<<" met "<<P->GetScore()<<" Punten";
			std::cout << "\n" << "je kan de quiz nu opnieuw doen om je memory te testen, als je het achter elkaar lukt, krijg je nog meer punten"<<std::endl;
			std::cout << "Ja of Nee?"<<std::endl;
			P->SetScore(0);
			std::string input;
			std::cin >> input;
			if(input=="Ja"||input=="ja")
			P->SetMultiplier(P->GetMultiplier() + 1);
			else {
				exit(0);
			}
		}
	}
}
