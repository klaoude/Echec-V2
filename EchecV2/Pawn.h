#include "Piece.h"

#pragma once

class Pawn : Piece
{
private:


public:
	Pawn();
	~Pawn();

	void move(Square *s) override;
};

