#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"

//“ü—ÍŠÖ˜A‚ÌƒvƒƒOƒ‰ƒ€

void KeyCheck() {
	if (CheckHitKey(KEY_INPUT_W) == 1) {
		flag[0] = 1;
	}
	else {
		flag[0] = 0;
	}
	if (CheckHitKey(KEY_INPUT_A) == 1) {
		flag[1] = 1;
	}
	else {
		flag[1] = 0;
	}
	if (CheckHitKey(KEY_INPUT_S) == 1) {
		flag[2] = 1;
	}
	else {
		flag[2] = 0;
	}
	if (CheckHitKey(KEY_INPUT_D) == 1) {
		flag[3] = 1;
	}
	else {
		flag[3] = 0;
	}
	if (CheckHitKey(KEY_INPUT_SPACE) == 1) {
		flag[4] = 1;
	}
	else {
		flag[4] = 0;
	}
}