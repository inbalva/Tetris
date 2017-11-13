#pragma warning(disable:4996)
#include <iostream>
#include <conio.h>
using namespace std;

#include "Block.h"
#include "Gotoxy.h"
#include "Point.h"

const int START_GAME = 1;
const int PAUSE_CONTINUE = 2;
const int INCREASE_SPEED = 3;
const int DECREASE_SPEED = 4;
const int EXIT = 9;


const int KEY_UP = 72;
const int KEY_DOWN = 80;
const int KEY_LEFT = 75;
const int KEY_RIGHT = 77;

int main()
{
	Block block;
	int choice;
	//choice = 0;
	choice = _getch();

	if (choice == KEY_DOWN)
	{
		cout << "down" << endl;
	}


	else if (choice == KEY_UP)
	{
		cout << "up" << endl;
	}

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