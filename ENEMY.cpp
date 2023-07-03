#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
#include<math.h>

void initMonstertype1(int number)
{
	MONSTER[number].flag = 1;
	MONSTER[number].count = 0;
	MONSTER[number].HP = 1;
	MONSTER[number].x = 1100;
	MONSTER[number].y = 0;
	MONSTER[number].r = 15;
	MONSTER[number].speed = 1.0;
	MONSTER[number].MovePattern = 1;
	//MONSTER[number].knd = ".png"; //‰æ‘œƒf[ƒ^‚ğ“ü‚ê‚éêŠ
}