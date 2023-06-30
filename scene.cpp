#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"

void MAIN() {
	switch (scenecount) {
	case 0:
		Load();
		init1();
		scenecount = 1;

		break;
	case 1:
		GRAPH_TITLE();
		if (CheckHitKey(KEY_INPUT_RETURN) == 1) {
			
		}
		stagecount = 2;
		break;
	case 2:
		KeyCheck();
		Pmove();
		Omove();
		GRAPH_MAIN();
		DrawFormatString(0, 0, GetColor(255, 255, 255), "%f,%f,%d", FORCE.x, FORCE.y, FORCE.Ocount);
		break;
	default:
		DrawFormatString(0, 0, GetColor(255, 0, 0), "ERROR");
		break;
	}
}