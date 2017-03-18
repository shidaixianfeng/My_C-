#pragma once
template<typename T>
T minimum(T a, T b, T c)
{
	T minimum = a;
	if (b <= a&&b <= c)
		minimum = b;
	if (c <= a&&c <= b)
		minimum = c;
	return minimum;
}
