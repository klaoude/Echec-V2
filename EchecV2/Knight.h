#pragma once
#include "Piece.h"
class Knight :
	public Piece
{
public:
	Knight(Color c);
	~Knight();

	bool canMove(Square *s, Square *d) override;

};

