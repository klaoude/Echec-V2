#include "Piece.h"

#pragma once

class Pawn : public Piece
{
private:

public:
	Pawn();
	~Pawn();

	void move(Square *s) override;
};

