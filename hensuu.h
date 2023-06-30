#pragma once
#pragma once
#include"struct.h"

#ifdef GL_INSTANCE
#define GL
#else
#define GL extern 
#endif

#include"function.h"
//「GL 変数置き場でした宣言と同じ宣言」とする。
/*
例　hensuuokiba.cpp　で　int a;　と宣言したら
　　hensuu.h　で　GL int a;　と宣言する。
  　ここでGL宣言した後はhensuu.hをインクルード(#includeのこと)していれば、
    extern宣言をしなくても変数が使えます。
*/

GL Player JIKI;
GL Option FORCE;
GL int flag[counts];
GL int stagecount;