#pragma once

#include "Square.h"

const float SIZE = 10.f;

class Piece
{
private:
	bool m_alive;

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
	bool getAlive() { return m_alive; }

	virtual void move(Square *s) = 0;

	virtual void draw(KlaoudeEngine::SpriteBatch& batch);
};

