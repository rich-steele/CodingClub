#include <math.h>

#include "Vector2.h"

Vector2::Vector2()
{
	x = 0.0f;
	y = 0.0f;
}

Vector2::Vector2(float _x, float _y)
	: x(_x)
	, y(_y)
{
}

Vector2::Vector2(int _x, int _y)
{
	// Here we 'cast' the int to a float number
	x = (float)_x;
	y = (float)_y;
}

Vector2::~Vector2()
{
	// Nothing needed to delete in the destructor currently
}

float Vector2::Length()
{
	// TODO Fill this out
	return 0.0f;
}

Vector2 Vector2::operator + (const Vector2 &v)
{
	Vector2 result;

	result.x = this->x + v.x;
	result.y = this->y + v.y;

	return result;
}

Vector2 Vector2::operator - (const Vector2 &v)
{
	Vector2 result;

	result.x = this->x - v.x;
	result.y = this->y - v.y;

	return result;
}

Vector2& Vector2::operator += (const Vector2 &v)
{
	this->x += v.x;
	this->y += v.y;

	return *this;
}
