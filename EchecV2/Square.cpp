#include "Square.h"

Square::Square(int x, int y)
{
	m_x = x;
	m_y = y;
}

Square::~Square()
{
}

void Square::movePiece(Square * d)
{
	if (m_piece->canMove(this, d))
}
