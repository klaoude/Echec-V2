#include "Pawn.h"
#include <stdio.h>
Pawn::Pawn(Color c)
{
	this->setColor(c);
}

Pawn::~Pawn()
{
}

void Pawn::move(Square *s, Square *d)
{
	if (getColor() == BLACK)
	{
		if (s->getX() == d->getX())
		{
			if (s->getY() == d->getY() + 1)
			{
				d->setPiece(s->getPiece);
				d->setEmpty(false);
				s->setPiece(nullptr);
				s->setEmpty(true);
			}
		}
	}
}