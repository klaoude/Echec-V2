#pragma once

#include "Square.h"

const float SIZE = 10.f;

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
	GLuint m_textureID;
	KlaoudeEngine::ColorRGBA8 m_color;
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

	virtual void move(Square *s, Square *d) = 0;
	virtual void move(Square *s) = 0;

	virtual void draw(KlaoudeEngine::SpriteBatch& batch);
};

