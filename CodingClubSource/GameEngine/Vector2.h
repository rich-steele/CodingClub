#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2
{
public:
	// Constructors
	Vector2();
	Vector2(float _x, float _y);
	Vector2(int _x, int _y);

	// Destructor
	~Vector2();

	// Functions
	float Length();

	// Operators
	Vector2 operator + (const Vector2 &v);
	Vector2& operator += (const Vector2 &v);

	// Member variables (public for now)
	float x, y;

private:

};

#endif // !VECTOR2_H
