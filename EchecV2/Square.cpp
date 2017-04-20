#include "Square.h"
#include "Piece.h"

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
	{
		d->setPiece(m_piece);
		d->setEmpty(false);

		setEmpty(true);
		setPiece(nullptr);
	}
	else
	{
		printf("\nMOVE NON AUTORISE\n");
	}
}
