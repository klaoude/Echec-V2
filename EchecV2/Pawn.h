#include "Piece.h"

#pragma once

class Pawn : public Piece
{
private:

public:
	Pawn(Color c);
	~Pawn();

	bool canMove(Square *s, Square *d) override;
};

