#include "Piece.h"

#pragma once

class Pawn : public Piece
{
private:

public:
	Pawn(Color c);
	~Pawn();

	void move(Square *s, Square *d) override;
	void move(Square *s) override;
};

