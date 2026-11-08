#include <vector>
#include "../Matsunaga/Scripts/Meteorite/Meteorite.h"
#include "Bullet.h"

int main()
{
    // è¦ÎŠÇ—‘¤‚É‘‚­’e‚Æ‚Ì“–‚½‚è”»’èi‰¼)
    std::vector<Meteorite*> meteoriteList;
    std::vector<Bullet*> bulletList;
    for (auto bulletIt = bulletList.begin(); bulletIt != bulletList.end(); )
    {
        bool isCollision = false;

        for (auto meteoriteIt = meteoriteList.begin(); meteoriteIt != meteoriteList.end(); )
        {
            if (Collision::CircleAndCircle((*bulletIt)->GetPosition(), (*bulletIt)->GetRadius(), (*meteoriteIt)->GetPosition(), (*meteoriteIt)->GetRadius()))
            {
                isCollision = true;

                delete* meteoriteIt;
                meteoriteIt = meteoriteList.erase(meteoriteIt);

                delete* bulletIt;
                bulletIt = bulletList.erase(bulletIt);

                break;
            }
            else
            {
                meteoriteIt++;
            }
        }
        if (isCollision == false)
        {
            bulletIt++;
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        if (/*’e[i]‚ªƒIƒt‚¾‚Á‚½‚ç*/)
        {
            continue;
        }
        for (/*è¦Î‚Ì—v‘f•ªƒ‹[ƒv*/)
        {
            if (Collision::CircleAndCircle((/*’e‚ÌˆÊ’u*/, /*’e‚Ì‰~”¼Œa*/, /*è¦Î‚ÌˆÊ’u*/, /*è¦Î‚Ì‰~”¼Œa*/))
            {
                // ’e‚ğíœorƒIƒt‚É‚·‚é
                // è¦Î‚ğíœorƒIƒt‚É‚·‚é
            }
        }
    }
}