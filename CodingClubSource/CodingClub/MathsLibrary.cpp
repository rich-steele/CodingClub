int multiply(const int a, const int b)
{
	return a * b;
}

void clamp(int &value, const int min, const int max)
{
	if (value < min)
	{
		value = min;
	}
	else if (value > max)
	{
		value = max;
	}
}

// Notice the difference between these. multiply() returns the value as an int
// but clamp() doesn't return anything. It is a void function. Instead it modifies the &value.
// The '&' means it is a reference to the value, so it can be changed by the function