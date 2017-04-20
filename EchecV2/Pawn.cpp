#include "Pawn.h"

#include <stdio.h>

Pawn::Pawn(Color c)
{
	this->setColor(c);

	if (c == BLACK)
		m_uvRect = m_texture.getUVs(11);
	else
		m_uvRect = m_texture.getUVs(5);

	m_position = glm::vec2(0, 0);
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
				d->setPiece(s->getPiece());
				d->setEmpty(false);
				s->setPiece(nullptr);
				s->setEmpty(true);
			}
		}
	}
}

void Pawn::move(Square *s, Square *d)
{

}