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

/*
// è¦ÎŠÇ—‘¤‚É‘‚­’e‚Æ‚Ì“–‚½‚è”»’èi‰¼)
std::vector<Meteorite*> meteoriteList;
std::vector<Bullet*> bulletList;
for (auto bulletIt = bullet.begin(); bulletIt != bullet.end(); )
{

	for (auto meteoriteIt = meteorite.begin(); meteoriteIt != meteorite.end(); )
	{
		if (Collision::CircleAndCircle((*bulletIt)->GetPosition(), (*bulletIt)->GetRadius(), ))
		{
			delete* meteoriteIt;
			meteoriteIt = meteorite.erase(meteoriteIt);
			delete* bulletIt;
			bulletIt = bullet.erase(bulletIt);
			break;
		}
		else
		{
			// íœ‚µ‚È‚©‚Á‚½ê‡‚¾‚¯Ÿ‚Öi‚ß‚é
			meteoriteIt++;
		}
	}

}
*/