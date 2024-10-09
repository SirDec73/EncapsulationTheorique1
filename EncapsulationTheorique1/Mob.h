#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity,Alive,AMovable{
public:
	Mob(float,float,float,float,float);
	void TakeDamage(float) override;
	void Move() override;
};