#pragma once

#include <KlaoudeEngine/SpriteBatch.h>

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
};