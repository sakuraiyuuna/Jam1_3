#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
#include<math.h>

void Pmove() {
	int k;
	k = JIKI.speed;
	if (flag[0] == 1 || flag[2] == 1) {
		if (flag[1] == 1 || flag[3] == 1) {
			k = sqrt(JIKI.speed) * 1.2;
		}
	}
	if (flag[0] == 1) {
		JIKI.y -= k;
	}
	if (flag[1] == 1) {
		JIKI.x -= k;
	}
	if (flag[2] == 1) {
		JIKI.y += k;
	}
	if (flag[3] == 1) {
		JIKI.x += k;
	}
	if (JIKI.x < 0 + JIKI.r) {
		JIKI.x = 0 + JIKI.r;
	}
	if (JIKI.x > 1000 - JIKI.r) {
		JIKI.x = 1000 - JIKI.r;
	}
	if (JIKI.y < 0 + JIKI.r) {
		JIKI.y = 0 + JIKI.r;
	}
	if (JIKI.y > 750 - JIKI.r) {
		JIKI.y = 750 - JIKI.r;
	}
}