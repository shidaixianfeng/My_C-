#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
public:
	Rectangle(float length = 1.0, float width = 1.0);
	~Rectangle();
	void setLenth(float length);
	void setWidth(float width);
	float getLength() const;
	float getWidth() const;
	void CalculateArea();
	void CalculatePerimeter();
private:
	float m_fLength;
	float m_fWidth;
};
#endif // !RECTANGLE_H
