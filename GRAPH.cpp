#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"

//ï`âÊÇ…Ç¬Ç¢ÇƒÇÃÉvÉçÉOÉâÉÄ

void GRAPH_TITLE() {
	DrawFormatString(0, 0, GetColor(255, 255, 255), "TITLE");
}

void GRAPH_JIKI() {
	DrawRotaGraph(JIKI.x, JIKI.y, 0.1, 0, image[2], TRUE);
	DrawCircle(JIKI.x, JIKI.y, JIKI.r,
		GetColor(255, 255, 255), TRUE);
}

void GRAPH_OPTION() {
	DrawRotaGraph(FORCE.x-1, FORCE.y+1.9, 0.09, 0, image[1], TRUE);
	//DrawCircle(FORCE.x, FORCE.y, FORCE.r,GetColor(255, 0, 0), FALSE);
}

void GRAPH_MAIN() {
	GRAPH_JIKI();
	GRAPH_OPTION();
	GRAPH_ENEMY();
}