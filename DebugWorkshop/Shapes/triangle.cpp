#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

float Triangle::get_area() const
{
    return 0.5f * _base * _height;
}
