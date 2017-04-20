#include "Board.h"

#include <KlaoudeEngine/RessourceManager.h>

Board::Board(glm::vec2 position, glm::vec2 size)
{
	m_textureID = KlaoudeEngine::RessourceManager::getTexture("Sprites/board.png").id;
	m_position = position;
	m_size = size;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			m_squares[i][j] = new Square(j, i);

	m_squares[0][0]->setPiece(new Pawn(BLACK));


}

Board::~Board()
{
}

void Board::draw(KlaoudeEngine::SpriteBatch& spritebatch)
{
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);

	glm::vec4 destRect(m_position.x, m_position.y, m_size.x, m_size.y);

	spritebatch.draw(destRect, uvRect, m_textureID, 0.0f, KlaoudeEngine::ColorRGBA8(255, 255, 255, 255), glm::vec2(0, 0));

	m_squares[0][0]->getPiece()->draw(spritebatch);
}
