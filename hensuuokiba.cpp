#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
//「extern宣言が不要になっています。」
//変数はここで宣言、宣言したらhensuu.hでも宣言する

int scenecount;

Player JIKI;
Option FORCE;
Enemy MONSTER[Monsternum];
Ballet MONSTERSHOT[Monster_shotnum];
int flag[counts];
int image[counts];
int stagecount;