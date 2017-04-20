#pragma once

#include <KlaoudeEngine\SpriteBatch.h>
#include <KlaoudeEngine\TileSheet.h>

//Sprite uv code
/*         BLANC    NOIR    
ROI          6        0
REINE        7        1
PION         11       5
CAVALIER     9        3
FOU          8        2
TOUR         10       4
*/

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

	Piece* getPiece() { return m_piece; }

	void movePiece(Square *d);

	int getX() { return m_x; }
	int getY() { return m_y; }
};

