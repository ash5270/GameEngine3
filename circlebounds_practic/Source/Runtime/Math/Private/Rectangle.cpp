#include "Precompiled.h"

Rectangle::Rectangle(const std::vector<Vector2> InVertices)
{
	Min = Vector2(INFINITY, INFINITY);
	Max = Vector2(-INFINITY, -INFINITY);

	for (int i = 0; i < InVertices.size(); i++)
	{
		(*this) += InVertices[i];
	}
}