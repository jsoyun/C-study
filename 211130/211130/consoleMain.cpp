#include "mainGame.h"
#include "player.h"
#include "enemy.h"

int main()
{
	player* pl = new player;    //<--�����Ҵ��� �� new
	enemy* em = new enemy;

	pl->printPlayer();
	em->printEnemy();

	em->setEnemyHP(em->getEnemyHP() - pl->getPlayerAtk());
	em->printEnemy();

	delete pl;     //�����Ҵ��� �޸� ��ȯ�Ϸ��� deletet
	delete em;



	return 0;
}