#pragma once
#include <ostream>
#include <iostream>


template<typename T>
struct Vector2
{
	T x, y;

	Vector2<T>& operator+=(Vector2<T> const& v)
	{
		x += v.x; y += v.y;
		return *this;
	}

	Vector2<T>& operator-=(Vector2<T> const& v)
	{
		x -= v.x; y -= v.y;
		return *this;
	}

	Vector2<T>& operator*=(T const& s)
	{
		x *= s; y *= s;
		return *this;
	}

	Vector2<T>& operator/=(T const& s)
	{
		x /= s; y /= s;
		return *this;
		
	}

};

//--------------------------------------------------------

template<typename T>
Vector2<T> operator+(Vector2<T> const& a, Vector2<T> const& b)
{
	return Vector2<T>{ a.x + b.x, a.y + b.y };
}

template<typename T>
Vector2<T> operator-(Vector2<T> const& a, Vector2<T> const& b)
{
	return Vector2<T>{ a.x - b.x, a.y - b.y };
}

template<typename T>
Vector2<T> operator*(Vector2<T> const& a, Vector2<T> const& b)
{
	return Vector2<T>{ a.x * b.x, a.y * b.y };
}

template<typename T>
Vector2<T> operator/(Vector2<T> const& a, Vector2<T> const& b)
{
	return Vector2<T>{ a.x / b.x, a.y / b.y };
}

//------------------------------------------------------

template<typename T>
T dot(Vector2<T> const& a, Vector2<T> const& b)
{
	return a.x*b.x+a.y*b.y;
}

template<typename T>
T length(Vector2<T> const& a)
{
	return sqrt(pow(a.x,2)+pow(a.y,2));
}
template<typename T>
T sqlength(Vector2<T> const& a)
{
	return pow(a.x, 2) + pow(a.y, 2);
}
template<typename T>
Vector2<T> normalize(Vector2<T> const& a)
{
	return Vector2<T>{ a.x / length(a), a.y / length(a) };
}

//--------------------------------------------------------------

template<typename T>
std::ostream& operator<< (std::ostream& o, Vector2<T> const& v)
{
	o << v.x << " " << v.y;
	return o;
}

template<typename T>
std::istream& operator>> (std::istream& i, Vector2<T> & v)
{
	i >> v.x;
	i >> v.y;
	return i;
}

