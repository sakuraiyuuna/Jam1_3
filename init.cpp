#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"

//‰Šú‰»ˆ—‚ÌƒvƒƒOƒ‰ƒ€
void init1() {
	JIKI = { 300,375,5,3 };
	FORCE = { 1200,375,16,4,0,0,0 };
	for (int a = 0; a < counts; a++) {
		flag[a] = 0;
	}
}