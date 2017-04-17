#include "Board.h"

#include <KlaoudeEngine/RessourceManager.h>

Board::Board(glm::vec2 position, glm::vec2 size)
{
	m_textureID = KlaoudeEngine::RessourceManager::getTexture("Sprites/board.png").id;
	m_position = position;
	m_size = size;

	Square s(10);
	s.setPiece(new Pawn());

}

Board::~Board()
{
}

void Board::draw(KlaoudeEngine::SpriteBatch& spritebatch)
{
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);

	glm::vec4 destRect(m_position.x, m_position.y, m_size.x, m_size.y);

	spritebatch.draw(destRect, uvRect, m_textureID, 0.0f, KlaoudeEngine::ColorRGBA8(255, 255, 255, 255), glm::vec2(0, 0));
}
