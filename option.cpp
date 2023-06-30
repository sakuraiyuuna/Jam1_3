#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
#include<math.h>

void Omove() {
	int gx;
	int gy;
	double s;
	double c;
	double t;

	if (flag[4] == 0) {
		if (FORCE.Ocount == 0) {
			FORCE.Oflag = 0;
		}
	}
	else {
		if (FORCE.Ocount == 0) {
			FORCE.Oflag = 1;
			FORCE.Ocount = 400;
		}
	}
	FORCE.Ocount--;
	if (FORCE.Ocount < 0) {
		FORCE.Ocount = 0;
	}
	if (FORCE.Oflag == 0) {
		gx = JIKI.x + FORCE.r;
		gy = JIKI.y;
		if (gx != FORCE.x || gy != FORCE.y) {
			s = gx - FORCE.x;
			c = gy - FORCE.y;
			t = sqrt(s * s + c * c);
			FORCE.x += s / t * FORCE.speed;
			FORCE.y += c / t * FORCE.speed;
			if (FORCE.x >= JIKI.x + FORCE.r + JIKI.r && s > 0) {
				FORCE.x = JIKI.x + FORCE.r + JIKI.r;
			}
			if (FORCE.x <= JIKI.x + FORCE.r + JIKI.r && s < 0) {
				FORCE.x = JIKI.x + FORCE.r + JIKI.r;
			}
			if (FORCE.y >= JIKI.y && c > 0) {
				FORCE.y = JIKI.y;
			}
			if (FORCE.y <= JIKI.y && c < 0) {
				FORCE.y = JIKI.y;
			}
		}
	}
	else {
		if (FORCE.Ocount > 370) {
			FORCE.x += 18;
			if (FORCE.x > 1000 - FORCE.r) {
				FORCE.x = 1000 - FORCE.r;
			}
		}
	}
	if (HIT_ENonEN(JIKI.x, JIKI.y, JIKI.r, FORCE.x, FORCE.y, FORCE.r) == TRUE) {
		FORCE.Ocount = 0;
		FORCE.Oflag = 0;
	}

}