

#pragma once
class Square
{
private:
	int m_size;
	bool m_empty;
	Piece m_piece;

public:
	Square(int size);
	~Square();
	bool isEmpty() { return m_empty; }
	void setEmpty(bool b) { m_empty = b; }

};

