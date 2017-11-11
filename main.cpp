#pragma warning(disable:4996)
#include <iostream>
using namespace std;

const int START_GAME = 1;
const int PAUSE_CONTINUE = 2;
const int INCREASE_SPEED = 3;
const int DECREASE_SPEED = 4;
const int EXIT = 9;


int main()
{
	int choice;

	cout << "Please choose one of the following: " << endl
		<< "(1) Start a game" << endl << "(2) Pause/continue the Game" << endl << "(3) Increase speed of blocks" << endl
		<< "(4) Decrease speed of blocks" << endl << "(9) Exit";
	cin >> choice;

	while (choice != EXIT)
	{
		switch (choice) {

		case START_GAME:
			/*-------------------TBD-------------------*/
			//Need to present score and how many blocks were cleared in 3 first rows
			//how to get left/ right/ rotate from the user?
			break;
		case PAUSE_CONTINUE:
			system("pause");
			break;
		case INCREASE_SPEED:
			/*-------------------TBD-------------------*/
			break;
		case DECREASE_SPEED:
			/*-------------------TBD-------------------*/
			break;
	}

	system("pause");
}