#include "Earth.h"
#include "Dxlib.h"

Vector2 Earth::GetPosition()
{
	return position;
}

void Earth::Draw()
{
	DrawCircle(position.x, position.y, 100, 0x00ff00, true);
}