#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
#include<math.h>
//敵の挙動を入れます
void updateEnemy()
{
	for (int i = 0; i < Monsternum; i++)
	{
		//敵機の生存フラグ
		if (MONSTER[i].flag == 1)
		{
			//敵機の行動パターン
			if (MONSTER[i].MovePattern == 1)
			{
				//場に出てからの秒数
				if (MONSTER[i].count == 0)
				{
					MONSTER[i].vx = -1;
					MONSTER[i].vy = 1;
				}
				if (MONSTER[i].count == 200)
				{
					MONSTER[i].vx = -1;
					MONSTER[i].vy = 1;
				}
				if (MONSTER[i].count == 400)
				{
					MONSTER[i].vx = -1;
					MONSTER[i].vy = -1;
				}
				if (MONSTER[i].count == 600)
				{
					MONSTER[i].vx = -0.3;
					MONSTER[i].vy = 0;
				}
				if (MONSTER[i].count == 800)
				{
					MONSTER[i].vx = -1;
					MONSTER[i].vy = 0;
				}
				MONSTER[i].x = (MONSTER[i].x + MONSTER[i].vx) * MONSTER[i].speed;
				MONSTER[i].y = (MONSTER[i].y + MONSTER[i].vy) * MONSTER[i].speed;
			}
		}
		MONSTER[i].count++;
	}
}