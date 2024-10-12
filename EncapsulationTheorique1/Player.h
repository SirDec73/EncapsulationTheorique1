#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, AMovable, IAttacker {
public:
	Player(float x, float y, float hp, float dir_X, float dir_Y, float speed);
	void TakeDamage(float) override;
	void Move(Entity&)	override;
	void Attack(Alive*, float) override;
};

#endif // !PLAYER_H__