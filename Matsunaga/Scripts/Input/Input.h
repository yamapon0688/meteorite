#pragma once
#include "../Vector/Vector.h"
#include "Dxlib.h"

class Input
{
public:
	enum class KeyState
	{
		FREE,   // 押されていない
		DOWN,   // 押された瞬間
		HOLD,   // 押され続けている
		UP      // 離された瞬間
	};
	Input();
	void Update();

	bool GetKey(int keyCode) const;     // 押されているとき
	bool GetKeyDown(int keyCode) const; // 押された瞬間
	bool GetKeyUp(int keyCode) const;   // 離された瞬間
	int GetKeyHoldFrame(int keyCode) const; // 押されているフレーム数

	Vector2 GetDirection() const;	// WASDキーによる移動方向を取得
	Vector2 GetDirectionDown() const; //WASDキーが押された瞬間の移動方向を取得
	int GetDebugValue() const;

private:
	// 全キー（DxLibの最大256個）の状態を管理する構造体
	struct KeyInfo
	{
		KeyState state = KeyState::FREE;
		int holdFrame = 0;
	};
	KeyInfo keys[256];

	int debugValue = 0;
	const int maxDebugValue = 3;
};
