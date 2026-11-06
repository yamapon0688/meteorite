#include "DxLib.h"
#include "Meteorite.h"
#include <vector>
#include "../../../Scripts/Bullet.h"
Meteorite::Meteorite(Vector2 pos, double speed, int radius)
{
	position = pos;
	this->speed = speed;
	this->radius = radius;
}

Meteorite::~Meteorite()
{
	Destroy();
}

void Meteorite::Update(Vector2 earthPosition)
{
	Vector2 distance;
	distance = earthPosition - position;

	velocity = (distance * 0.01) * speed;
}

void Meteorite::Draw()
{
	DrawCircle(position.x, position.y, radius, 0xff0000, true);
}
void Meteorite::Destroy() // ”j‰óˆ—
{

}

