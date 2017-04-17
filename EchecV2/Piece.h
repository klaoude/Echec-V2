#pragma once

#include "Square.h"

class Piece
{
private:
	bool m_alive;

public:
	Piece();
	~Piece();

	void setAlive(bool value) { m_alive = value; }
	bool getAlive() { return m_alive; }

	virtual void move(Square *s) = 0;
};

