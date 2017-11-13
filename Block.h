#ifndef _BLOCK_H
#define _BLOCK_H

#include "Point.h"

class Block {

public:

	Block()
	{
		blockShape = rand() % 4;

		switch (blockShape)
		{
		case LINE:

			blockSize = 4;
			body = new Point[blockSize];
			body[0].setPoint(8, 0);
			body[1].setPoint(9, 0);
			body[2].setPoint(10, 0);
			body[3].setPoint(11, 0);
			break;

		case SQUARE:

			blockSize = 4;
			body = new Point[blockSize];
			body[0].setPoint(8, 0);
			body[1].setPoint(9, 0);
			body[2].setPoint(8, 1);
			body[3].setPoint(9, 1);

			break;
		case JOKER:

			blockSize = 1;
			body = new Point[blockSize];
			body[0].setPoint(); //default values are x=8, y=0

			break;
		case BOMB:
			blockSize = 1;
			c = '@';
			body = new Point[blockSize];
			body[0].setPoint(); //default values are x=8, y=0

			break;
		default:
			break;
		}
	}

	enum shapes { LINE, SQUARE, JOKER, BOMB };


	void move(int dirX, int dirY);

private:

	Point *body;
	int blockSize;
	int blockShape;
	char c='#';

};


void Block::move(int dirX, int dirY)
{
	body[3].draw(' ');
	for (int i = 4; i > 0; --i) {
		body[i] = body[i - 1];
	}
	body[0].move();
	body[0].draw(c);
}

#endif // _BLOCK_H
