Vector2（2D用）と Vector3（3D用）のクラスが入っています。
演算子オーバーロード（+, -, *, /, +=, -=, *=, /=, ==, !=）にも対応しています。

[メンバ関数（共通）]
double Magnitude() const;
ベクトルの大きさを返す関数（sqrtを使っているため毎フレーム呼び出すのはNG）

Vector2/Vector3 Normalized() const;
正規化

double SqMagnitude() const;
ベクトルの大きさの二乗を返す関数

[関数]
Vector2
double Vector2Distance(const Vector2& a, const Vector2& b); 
二点間の距離を返す関数（sqrtを使っているため毎フレーム呼び出すのはNG）

double Vector2DistanceSq(const Vector2& a, const Vector2& b);
二点間の距離の二乗を返す関数

double Dot(const Vector2& a, const Vector2& b);
内積の計算

double Cross(const Vector2& a, const Vector2& b);
外積の計算

Vector3
double Vector3Distance(const Vector3& a, const Vector3& b);
二点間の距離を返す関数（sqrtを使っているため毎フレーム呼び出すのはNG）

double Vector3DistanceSq(const Vector3& a, const Vector3& b);
二点間の距離の二乗を返す関数

double Dot(const Vector3& a, const Vector3& b);
内積の計算

Vector3 Cross(const Vector3& a, const Vector3& b);
外積の計算

static変数
Vector2（y座標は下がプラス）

zero;  // x: 0 y: 0
one;   // x: 1 y: 1
up;    // x: 0 y:-1
down;  // x: 0 y: 1
left;  // x:-1 y: 0
right; // x: 1 y: 0

Vector3（y座標は上がプラス）
zero;    // x: 0 y: 0 z: 0
one;     // x: 1 y: 1 z: 1
up;      // x: 0 y: 1 z: 0
down;    // x: 0 y:-1 z: 0
left;    // x:-1 y: 0 z: 0
right;   // x: 1 y: 0 z: 0
forward; // x: 0 y: 0 z: 1
back;    // x: 0 y: 0 z:-1

static変数の使い方

Vector2 A = Vector2::(static変数名);
Vector3 B = Vector3::(static変数名);

例
Vector2 pos = Vector2::zero;
Vector2 velocity = Vector2::right * 5.0; // 右方向にスピード5で移動

Vector3 spawnPos = Vector3::zero;
