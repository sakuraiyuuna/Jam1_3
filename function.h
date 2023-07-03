#pragma once
//ŠÖ”éŒ¾‚ÍAêŠ‚ª•ª‚©‚é‚æ‚¤‚É‚·‚é‚±‚Æ

//GRAPH.cpp
void GRAPH_TITLE();
void GRAPH_JIKI();
void GRAPH_OPTION();
void GRAPH_MAIN();
//player.cpp
void Pmove();
//option.cpp
void Omove();
//ENEMY.cpp
void initMonstertype1(int number);
//ENEMYPATTERN.cpp
void updateEnemy();
//ENEMYGRAPH.cpp
void GRAPH_ENEMY();
//STAGE.cpp
void STAGE1_STERT();
//hit.cpp
bool HIT_ENonEN(double x1, double y1, double r1,
	double x2, double y2, double r2);
//init.cpp
void init1();
//key.cpp
void KeyCheck();
//load.cpp
void Load();
//key.cpp
void KeyCheck();
//scene.cpp
void MAIN();
