#pragma once

#include "Square.h"

enum Color
{
	BLACK,
	WHITE
};

class Piece
{
private:
	bool m_alive;
	Color m_color;

public:
	Piece();
	~Piece();

	void setAlive(bool value) { m_alive = value; }
	bool isAlive() { return m_alive; }

	Color getColor() { return m_color; }
	void setColor(Color c) { m_color = c; }

	virtual void move(Square *s, Square *d) = 0;
};

