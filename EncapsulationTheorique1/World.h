#ifndef WORLD_H__
#define WORLD_H__
#include <iostream>
#include <vector>
#include "Entity.h"

class World {
	std::vector<Entity*> vEntity;
public:
	World();
	void Init();
	void Step();
};

#endif // !WORLD_H__
