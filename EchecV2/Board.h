#pragma once

#include <KlaoudeEngine/SpriteBatch.h>

#include "Pawn.h"
#include "Square.h"
class Board
{
public:
	Board(glm::vec2 position, glm::vec2 size);
	~Board();

	void draw(KlaoudeEngine::SpriteBatch& spritebatch);

private:
	GLuint m_textureID;
	glm::vec2 m_position;
	glm::vec2 m_size;
	Square *m_squares[8][8];


};