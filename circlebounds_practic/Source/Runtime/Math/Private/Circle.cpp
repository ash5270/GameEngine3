
#include "Precompiled.h"

Circle::Circle(const std::vector<Vector2> InVertices)
{
	// 위치 정보를 받아 중심과 반지름의 값을 구하는 로직 ( 직접 구현할 것 )
	
	for (int i = 0; i < InVertices.size(); i++)
	{
		Center+=InVertices[i];
	}

	Center = Center / InVertices.size();

	for (int i = 0; i < InVertices.size(); i++)
	{
		if ((Center - InVertices[i]).SizeSquared() > Radius)
		{
			Radius = (Center - InVertices[i]).SizeSquared();
		}
	}
}
