#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, AMovable, IAttacker {
public:
	Player(float,float,float,float,float);
	void TakeDamage(float) override;
	void Move()	override;
	void Attack(Alive*, float) override;
};