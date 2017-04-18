#include "Piece.h"

Piece::Piece()
{
}

Piece::~Piece()
{
}

void Piece::move(Square *s)
{	

}

void Piece::draw(KlaoudeEngine::SpriteBatch& spritebatch)
{
	glm::vec4 destRect(m_position.x, m_position.y, SIZE, SIZE);

	spritebatch.draw(destRect, m_uvRect, m_textureID, 0.0f, m_color, m_direction);
}