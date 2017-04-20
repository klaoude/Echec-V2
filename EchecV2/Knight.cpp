#include "Knight.h"



Knight::Knight(Color c)
{
	this->setColor(c);

	if (c == BLACK)
		m_uvRect = m_texture.getUVs(3);
	else
		m_uvRect = m_texture.getUVs(9);

	m_position = glm::vec2(0, 0);
}


Knight::~Knight()
{
}

bool Knight::canMove(Square * s, Square * d)
{
	if (!d->isEmpty())
		if (d->getPiece()->getColor() == getColor()) //if ally is on square

	if (abs(s->getY() - d->getY()) == 1)
		if (abs(s->getY() - d->getY()) == 3)
			return true;

	if (abs(s->getY() - d->getY()) == 3)
		if (abs(s->getY() - d->getY()) == 1)
			return true;

	return false;
}
