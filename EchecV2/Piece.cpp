#include "Piece.h"

#include <KlaoudeEngine\RessourceManager.h>

Piece::Piece()
{
	m_direction = glm::vec2(1, 1);

	KlaoudeEngine::GLTexture texture = KlaoudeEngine::RessourceManager::getTexture("Sprites/Chess_Pieces_Sprite.png");
	m_texture.init(texture, glm::ivec2(6, 2));
	m_colorRGBA8 = KlaoudeEngine::ColorRGBA8(255, 255, 255, 255);
}

Piece::~Piece()
{
}

void Piece::move(Square *s)
{	

}

void Piece::draw(KlaoudeEngine::SpriteBatch& spritebatch)
{
	glm::vec4 destRect(m_position.x, m_position.y, SIZE.x, SIZE.y);

	spritebatch.draw(destRect, m_uvRect, m_texture.texture.id, 0.0f, m_colorRGBA8, m_direction);
}