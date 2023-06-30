#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
//hensuuokiba.cpp　を確認すること
//メイン関数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	SetGraphMode(1000, 750, 32);
	if (DxLib_Init() == -1)
	{
		return -1;
	}
	SetDrawScreen(DX_SCREEN_BACK);
	Load();
	init1();
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
		//DrawGraph(0, 0, worldHK, TRUE);

		KeyCheck();
		Pmove();
		Omove();
		GRAPH_MAIN();
		DrawFormatString(0, 0, GetColor(255, 255, 255), "%f,%f,%d", FORCE.x, FORCE.y, FORCE.Ocount);
		ScreenFlip();
		ClearDrawScreen();
	}
	DxLib_End();
	return 0;
}