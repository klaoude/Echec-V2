#pragma once

#include "Square.h"

const glm::vec2 SIZE = glm::vec2(100, 100);

enum Color
{
	BLACK,
	WHITE
};

class Piece
{
private:
	bool m_alive;
	Color m_color;

protected:
	KlaoudeEngine::TileSheet m_texture;

	KlaoudeEngine::ColorRGBA8 m_colorRGBA8;
	glm::vec2 m_direction;
	glm::vec2 m_position;
	glm::vec4 m_uvRect;

public:
	Piece();
	~Piece();

	void setAlive(bool value) { m_alive = value; }
	bool isAlive() { return m_alive; }

	Color getColor() { return m_color; }
	void setColor(Color c) { m_color = c; }

	virtual bool canMove(Square *s, Square *d) = 0;

	virtual void draw(KlaoudeEngine::SpriteBatch& batch);
};

