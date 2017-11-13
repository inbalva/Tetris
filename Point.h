#ifndef _POINT_H
#define _POINT_H

#include <iostream>	
#include <conio.h>
#include "Gotoxy.h"

using namespace std;

const int KEY_UP = 72;
const int KEY_DOWN = 80;
const int KEY_LEFT = 75;
const int KEY_RIGHT = 77;

const int DEFAULT_BLOCK_SIZE = 4;
const int SPECIAL_BLOCK_SIZE = 1;

class Point {

private:
	int x = 8, y = 0; //default setting for point- the origin (ראשית הצירים)
	int dirX = 0 , dirY = -1; //the block will "fall" from the top so we want it to 

public:

	//enum direction { LEFT, RIGHT, ROTATE };

	void setPoint(int x = 8, int y = 0)
	{
		this->x = x;
		this->y = y;
	}

	void draw(char c='#')
	{
		gotoxy(x, y);
		cout << c << endl;
	}

	void move()
	{
		char dir;
		x = getch();
		//dir = (Point::direction)dir;

		switch (dir) {
		case KEY_LEFT:
			//if the new location will be outside the boarders then don't change the direction
			if (x - 1 >= 0) //the new location won't be outside the left boarder
			{
				dirX = -1;
				dirY = 0;
			}
			break;

		case KEY_RIGHT:
			//if the new location will be outside the boarders then don't change the direction
			if (x + 1 < 10) //the new location won't be outside the right boarder
			{
				dirX = 1;
				dirY = 0;
			}
			break;
		default:
			dirX = 0;
			dirY = -1;
	}
};

#endif //_POINT_H
