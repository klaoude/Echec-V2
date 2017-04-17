#pragma once

#include <KlaoudeEngine/SpriteBatch.h>

class Board
{
public:
	Board(glm::vec2 position);
	~Board();

	void draw(KlaoudeEngine::SpriteBatch& spritebatch);

private:
	GLuint m_textureID;
	glm::vec2 m_position;
};