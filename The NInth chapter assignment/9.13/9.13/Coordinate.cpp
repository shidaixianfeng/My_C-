#include "Coordinate.h"
#include<iostream>
using namespace std;

Coordinate::Coordinate(float x, float y)
{
	if(x<0||x>20||y<0||y>20)
	{
		cout << "the corrdinate is wrong x and y must between(0-20)" << endl;
		cout << "The coordinate will be initiliazed to(0,0)" << endl;
		m_fX = 1;
		m_fY = 1;
	}
	else
	{
		m_fX = x;
		m_fY = y;
	}	
}


Coordinate::~Coordinate()
{
}

void Coordinate::setCoor(float x, float y)
{
	m_fX = x;
	m_fY = y;
}
float Coordinate::getX() const
{
	return m_fX;
}
float Coordinate::getY() const
{
	return m_fY;
}
