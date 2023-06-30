#include"DxLib.h"
#include"const.h"
#include"function.h"
#include"hensuu.h"
#include"struct.h"
#include<math.h>

bool HIT_ENonEN(double x1, double y1, double r1,
	double x2, double y2, double r2) {
	double s;
	double c;
	double t;
	bool k;
	k = FALSE;
	s = x1 - x2;
	c = y1 - y2;
	t = sqrt(s * s + c * c);
	if (t <= r1 + r2) {
		k = TRUE;
	}
	return k;
}


