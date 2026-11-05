#pragma once
#include "../Matsunaga/Scripts/Vector/Vector.h" // VectorƒNƒ‰ƒX

class Earth
{
private:
	Vector2 position = Vector2(640/2, 480/2);
public:
	Vector2 GetPosition();
	void Draw();

};