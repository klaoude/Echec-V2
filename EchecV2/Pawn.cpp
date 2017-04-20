#include "Pawn.h"

#include <stdio.h>

Pawn::Pawn(Color c)
{
	this->setColor(c);

	if (c == BLACK)
		m_uvRect = m_texture.getUVs(5);
	else
		m_uvRect = m_texture.getUVs(11);

	m_position = glm::vec2(0, 0);
}

Pawn::~Pawn()
{
}

bool Pawn::canMove(Square *s, Square *d)
{
	
	if (getColor() == BLACK)
	{
		if (s->getX() == d->getX()) //if move is on same column
		{
			if (!d->isEmpty()) return false; //if someone is on the square

			if (s->getY() + 1 == d->getY()) return true; //move 1 square

			else if (s->getY() + 2 == d->getY() && s->getY() == 1) return true; //1st move (2 squares)
		}


		if (s->getX() + 1 == d->getX() || s->getX() - 1 == d->getX()) //if diagonal move
		{
			if (s->getY() + 1 == d->getY())
			{
				if (d->isEmpty()) return false;
				if (d->getPiece()->getColor() == getColor()) return false; //if ally is on square
				return true;
			}
		}
	}

	else if (getColor() == WHITE)
	{
		if (s->getX() == d->getX()) //if move is on same column
		{
			if (!d->isEmpty()) return false; //if someone is on the square

			if (s->getY() - 1 == d->getY()) return true; //move 1 square

			else if (s->getY() - 2 == d->getY() && s->getY() == 6) return true; //1st move (2 squares)
		}


		if (s->getX() + 1 == d->getX() || s->getX() - 1 == d->getX()) //if diagonal move
		{
			if (s->getY() - 1 == d->getY())
			{
				if (d->isEmpty()) return false;
				if (d->getPiece()->getColor() == getColor()) return false; //if ally is on square
				return true;
			}
		}
	}
}
