#ifndef _POINT_H
#define _POINT_H

#include <iostream>
#include "Gotoxy.h"

using namespace std;

class Point {
private:
	int x = 0, y = 0; //default setting for point- the origin (ראשית הצירים)
	int dirX = 1 , dirY = 0;

public:

	enum direction { LEFT, RIGHT, ROTATE };

	void setPoint(int _x = 0, int _y = 0)
	{
		x = _x;
		y = _y;
	}

	void draw(char c='#')
	{
		gotoxy(x, y);
		cout << c << endl;
	}

	void move()
	{
		int dir;
		cin >> dir;
		dir = (Point::direction)dir;

		switch (dir) {
		case LEFT:
			//if the new location will be outside the boarders then don't change the direction
			if (x - 1 >= 0) //the new location won't be outside the left boarder
			{
				dirX = -1;
				dirY = 0;
			}
			break;

		case RIGHT:
			//if the new location will be outside the boarders then don't change the direction
			if (x + 1 < 10) //the new location won't be outside the right boarder
			{
				dirX = 1;
				dirY = 0;
			}
			break;
	}
};

#endif //_POINT_H
