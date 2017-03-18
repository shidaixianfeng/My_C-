#include "Rectangle.h"
#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;

Rectangle::Rectangle(float A_x, float A_y, float B_x, float B_y, float C_x, float C_y, float D_x, float D_y)
{
	if(setABCD(A_x, A_y, B_x, B_y, C_x, C_y, D_x, D_y))
	{ }
	else
	{
		cout << "your enter the coordinate is wrong x<0,20> y<0,20> and the coordinate will be initiliazed to(0,0) (0,1),(1,0),(1,1)";
		setABCD(0, 0, 0, 1, 1, 0, 1, 1);
	}
	if(is_Rectangle())
	{
		Calculate();
	}
}


Rectangle::~Rectangle()
{
}

bool Rectangle::setABCD(float A_x, float A_y, float B_x, float B_y, float C_x, float C_y, float D_x, float D_y)
{
	if (A_x >= 0 && A_x <= 20 &&A_y>=0&&A_y<=20&& B_x >= 0 &&B_x <= 20&&B_y >= 0)
	{
		if (C_x >= 0 && C_x <= 20 && C_y >= 0 && C_y <= 20 && D_x >= 0 && D_x <= 20 && D_y >= 0 && D_y <= 20)
		{
			m_coorA.setCoor(A_x, A_y);
			m_coorB.setCoor(B_x, B_y);
			m_coorC.setCoor(C_x, C_y);
			m_coorD.setCoor(D_x, D_y);
		}
		else
			return false;
	}
	else
	return false;
	return true;
}

double Rectangle::Calculate()
{
	if(is_Rectangle())
	{
		float a = sqrt((m_coorA.getX() - m_coorB.getX())*(m_coorA.getX() - m_coorB.getX()) + (m_coorA.getY() - m_coorB.getY())*(m_coorA.getY() - m_coorB.getY()));
		float b = sqrt((m_coorA.getX() - m_coorC.getX())*(m_coorA.getX() - m_coorC.getX()) + (m_coorA.getY() - m_coorC.getY())*(m_coorA.getY() - m_coorC.getY()));
		if (a >= b)
		{
			m_fLength = a;
			m_fWidth = b;
		}
	}
	else
	{
		cout << "this is not a rectangle, you fool!!!" << endl;
	}
	return 0.0;
}

float Rectangle::getLength() const
{
	return m_fLength;
}

float Rectangle::getWidth() const
{
	return m_fWidth;
}

float Rectangle::Calculate_area()
{
	return m_fLength*m_fWidth;
}

double Rectangle::Calculate_perimeter()
{
	return 2*(m_fLength+m_fWidth);
}

bool Rectangle::is_square()
{
	if (m_fLength == m_fWidth)
		return true;
	else
	return false;
}

void Rectangle::setFillCharacter()
{
	float a[4] = { m_coorA.getY(),m_coorB.getY(),m_coorC.getY(),m_coorD.getY() };
	float b[4] = { m_coorA.getX(),m_coorB.getX(),m_coorC.getX(),m_coorD.getX() };
	for (int i = 25; i >= 0; i--)
	{
		if (i - a[3] > 0)
		{
			for (int j = 0; j <25; j++)
				cout << "#";
			cout << endl;
		}
		else if (i <= a[3] && i > a[0])
		{
			for (int j = 0; j <b[0]; j++)
				cout << "#";
			for (int j = 0; j <b[3] - b[0]; j++)
				cout << " ";
			for (int j = 0; j < 25 - b[3]; j++)
				cout << "#";
			cout << endl;
		}
		else
		{
			for (int j = 0; j <25; j++)
				cout << "#";
			cout << endl;
		}
	}
	/*for(int i=0;i<20-a[3];i++)
	{
		for (int j = 0; j <= 25; j++)
			cout << "#";
		cout << endl;
	}
	for(int i=0;i<a[4]-a[0];i++)
	{
		for (int j = 0; j < b[0]; j++)
			cout << "#";
		for (int j = 0; j < b[3] - b[1]; j++)
			cout << " ";
		for (int j = 0; j < 25 - b[3]; j++)
			cout << "#";
		cout << endl;
	}
	for(int i=0;i<20-a[0];i++)
	{
		for (int j = 0; j <= 25; j++)
			cout << "#";
		cout << endl;
	}*/
}

bool Rectangle::is_Rectangle()
{
	float R1x = m_coorA.getX() - m_coorB.getX();
	float R1y = m_coorA.getY() - m_coorB.getY();
	float R2x = m_coorA.getX() - m_coorC.getX();
	float R2y = m_coorA.getY() - m_coorC.getY();
	float R3x = m_coorC.getX() - m_coorD.getX();
	float R3y = m_coorC.getY() - m_coorD.getY();
	float R4x = m_coorD.getX() - m_coorB.getX();
	float R4y = m_coorD.getY() - m_coorB.getY();
	if(R1x*R2x-R1y*R2y==0)
	{
		if (R2x*R3x - R2y*R3y == 0)
		{
			if (R3x*R4x - R3y*R4y == 0)
				return true;
		}
		else
			return false;
	}
	else
	return false;
	return true;
}
