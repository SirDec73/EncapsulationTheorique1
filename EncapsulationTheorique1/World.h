#ifndef WORLD_H__
#define WORLD_H__
#include <iostream>
#include <vector>
#include "Entity.h"

class World {
	std::vector<Entity*> vEntity;
	bool existingMob;
public:
	World();
	void Init();
	void Step();
	void ExistingMob();
	bool CheckEnd();
	void EraseDead();
	float GetDistanceBetween(Entity*, Entity*);
};

#endif // !WORLD_H__
