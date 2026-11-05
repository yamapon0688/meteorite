#pragma once
#include "../Vector/Vector.h"

class Meteorite
{
public:
	Meteorite(Vector2 pos, double speed, int radius);
	~Meteorite();
	void Update(Vector2 earthPosition);
	void Draw();
	void Destroy();


private:
	Vector2 position;
	Vector2 velocity;
	double speed;
	int radius;
};
Meteorite meteorite;