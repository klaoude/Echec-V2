#include "Board.h"

#include <KlaoudeEngine/RessourceManager.h>

Board::Board()
{
	m_textureID = KlaoudeEngine::RessourceManager::getTexture("Sprites/board.png").id;
}

Board::~Board()
{
}

void Board::draw(KlaoudeEngine::SpriteBatch& spritebatch)
{
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);

	glm::vec4 destRect(0,0, 800, 600);

	spritebatch.draw(destRect, uvRect, m_textureID, 0.0f, KlaoudeEngine::ColorRGBA8(255, 255, 255, 255), glm::vec2(0, 0));
}
