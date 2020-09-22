
#include "Precompiled.h"

Circle::Circle(const std::vector<Vector2> InVertices)
{
	// ��ġ ������ �޾� �߽ɰ� �������� ���� ���ϴ� ���� ( ���� ������ �� )
	
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
