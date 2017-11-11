#ifndef _BLOCK_H
#define _BLOCK_H

#include "Point.h"

class Block {
private:
	Point body[4];
	char c;
	
public:

	//צריך להגריל פה צורה מתוך 4 צורות אפשריות

};

void Block::draw()
{
	
}

void Block::move(int dirX, int dirY)
{
	x = x + dirX;
	y = y + dirY;
	draw();
}
#endif // _BLOCK_H
