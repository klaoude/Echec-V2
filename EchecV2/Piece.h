#pragma once

class Square;

class Piece
{
private:
	bool m_alive;
	Square m_square;

public:
	Piece();
	~Piece();

	void setAlive(bool value) { m_alive = value; }
	bool getAlive() { return m_alive; }


	virtual void move() = 0;
};

