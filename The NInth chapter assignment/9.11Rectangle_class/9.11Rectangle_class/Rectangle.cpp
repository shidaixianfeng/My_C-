#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(float length, float width)
{
	m_fLength = length;
	m_fWidth = width;
}


Rectangle::~Rectangle()
{
}

void Rectangle::setLenth(float length)
{
	if (length <= 20.0&&length >= 1.0)
		m_fLength = length;
	else
	{
		cout << "The length which you enter is invalid(1.0-20.0) and the length will be initliazed 1.0"; \
			m_fLength = 1.0;
	}
}

void Rectangle::setWidth(float width)
{
	if (width >= 1.0&&width <= 20.0)
		m_fWidth = width;
	else
	{
		cout << "the width which you enter is invalid(1.0-20.0) and the width will be initiliazed to 1.0";

	}
}

float Rectangle::getLength() const
{
	return m_fLength;
}

float Rectangle::getWidth() const
{
	return m_fWidth;
}

void Rectangle::CalculateArea()
{
	cout <<"the area"<< m_fWidth*m_fLength << endl;
}

void Rectangle::CalculatePerimeter()
{
	cout << "the perimeter is: " << 2 * (m_fLength + m_fWidth) << endl;
}
