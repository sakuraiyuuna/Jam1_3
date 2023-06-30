#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"

//•`‰æ‚É‚Â‚¢‚Ä‚ÌƒvƒƒOƒ‰ƒ€
void GRAPH_JIKI() {
	DrawCircle(JIKI.x, JIKI.y, JIKI.r,
		GetColor(255, 255, 255), TRUE);
}

void GRAPH_OPTION() {
	DrawCircle(FORCE.x, FORCE.y, FORCE.r,
		GetColor(255, 255, 0), FALSE);
}

void GRAPH_MAIN() {
	GRAPH_JIKI();
	GRAPH_OPTION();
}