#pragma once

#include <KlaoudeEngine/SpriteBatch.h>

class Board
{
public:
	Board();
	~Board();

	void draw(KlaoudeEngine::SpriteBatch& spritebatch);

private:
	GLuint m_textureID;
};