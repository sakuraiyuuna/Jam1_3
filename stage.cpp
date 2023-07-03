#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
#include<math.h>
//ここに敵データを設置する
int stagetime = 0;
int id = 0;
void STAGE1_STERT()
{
	if (stagetime > 0 && stagetime <= 1000)
	{
		if (stagetime % 100 == 0)
		{
			initMonstertype1(id);
			id++;
		}
	}
	DrawFormatString(0, 200, GetColor(255, 255, 0), "%d 点", stagetime);
	stagetime++;
}