#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Coordinate.h"
class Rectangle 
{
public:
	Rectangle(float A_x, float A_y, float B_x, float B_y, float C_x, float C_y, float D_x, float D_y);
	~Rectangle();
	bool setABCD(float A_x, float A_y, float B_x, float B_y, float C_x, float C_y, float D_x, float D_y);
	double Calculate();//calculate the length and tyhe width
	float getLength() const;
	float getWidth() const;
	float Calculate_area();
	double Calculate_perimeter();
	bool is_square();
	void setFillCharacter();//to print the rectangle in one map;
	void setPerimeterCharacter();//the print the rectangle perimeter in one map;
private:
	Coordinate m_coorA;
	Coordinate m_coorB;
	Coordinate m_coorC;
	Coordinate m_coorD;
	float m_fLength;
	float m_fWidth;
	bool is_Rectangle();//向量求解；
};
#endif // !RECTANGLE_H
