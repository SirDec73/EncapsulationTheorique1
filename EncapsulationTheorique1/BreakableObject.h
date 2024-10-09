#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, Alive {
public:
	BreakableObject(float, float, float);
	void TakeDamage(float) override;
};