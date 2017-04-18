#pragma once

#include <KlaoudeEngine\SpriteBatch.h>

class Piece;

class Square
{
private:
	bool m_empty;
	Piece* m_piece;

	int m_x;
	int m_y;

public:
	Square(int x, int y);
	~Square();

	bool isEmpty() { return m_empty; }

	void setEmpty(bool b) { m_empty = b; }

	void setPiece(Piece *p) { m_piece = p; }

	Piece *getPiece() { return m_piece; }

	int getX() { return m_x; }
	int getY() { return m_y; }
};

