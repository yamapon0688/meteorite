#include "DxLib.h"
#include "Meteorite.h"
#include <vector>
#include "../../../Scripts/Bullet.h"
Meteorite::Meteorite(Vector2 pos, double speed, int radius, Vector2 earthPosition)
{
	position = pos;
	this->speed = speed;
	this->radius = radius;
	Vector2 distance;
	distance = earthPosition - position;
	Vector2 normalizeDistance = distance.Normalized();
	velocity = normalizeDistance * speed;
}

void Meteorite::Update()
{
	// ˆÚ“®ˆ—
	position += velocity;
}

void Meteorite::Draw()
{
	DrawCircle(position.x, position.y, radius, 0xff0000, true);
}

