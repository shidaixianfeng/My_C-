#pragma once
#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate
{
public:
	Coordinate(float =1, float =1);
	~Coordinate();
	void setCoor(float x, float y);
	float getX() const;
	float getY() const;
private:
	float m_fX;
	float m_fY;
};
#endif // !COORDINATE_H


