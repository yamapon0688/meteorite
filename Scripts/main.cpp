

// 隕石管理側に書く弾との当たり判定（仮)
std::vector<Meteorite*> meteoriteList;
std::vector<Bullet*> bulletList;
for (auto bulletIt = bulletList.begin(); bulletIt != bulletList.end(); )
{
    bool isCollision = false;

    for (auto meteoriteIt = meteoriteList.begin(); meteoriteIt != meteoriteList.end(); )
    {
        // 1. 文法エラー（余計なセミコロンや括弧のミス）を修正
        if (Collision::CircleAndCircle((*bulletIt)->GetPosition(), (*bulletIt)->GetRadius(),
            (*meteoriteIt)->GetPosition(), (*meteoriteIt)->GetRadius()))
        {
            isCollision = true;

            // 2. 隕石の解放と削除（変数名を meteoriteList に統一）
            delete* meteoriteIt;
            meteoriteIt = meteoriteList.erase(meteoriteIt);

            // 3. 弾の解放と削除（変数名を bulletList に統一）
            delete* bulletIt;
            bulletIt = bulletList.erase(bulletIt);

            // 弾が消滅したため、この弾に対するループを即座に抜ける
            break;
        }
        else
        {
            // 衝突しなかった場合のみ隕石のイテレータを進める
            meteoriteIt++;
        }
    }

    // 衝突がなかった場合のみ弾のイテレータを進める
    // （衝突した場合は、erase の戻り値によって bulletIt は既に次の要素を指しているため）
    if (isCollision == false)
    {
        bulletIt++;
    }
}
}