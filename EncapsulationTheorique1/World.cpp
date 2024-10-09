#include <iostream>
#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include "World.h"

World::World() {

}

void World::Init() {
	StaticObject* staticObject = new StaticObject(5.f, 4.f);
	BreakableObject* breakableObject = new BreakableObject(2.f, 2.f, 1.f);
	Mob* mob = new Mob(5.f, 5.f, 20.f, 0.f, 0.f, 1.f);
	Player* player = new Player(0.f, 0.f, 10.f, 0.f, 0.f, 1.f);

	vEntity.push_back(staticObject);
	vEntity.push_back(breakableObject);
	vEntity.push_back(mob);
	vEntity.push_back(player);

	mob->Move(*player);
}

void World::Step() {

	for (int i = 0; i < vEntity.size(); i++) {
		if (dynamic_cast<Mob*>(vEntity[i]) != nullptr) {
			vEntity[i].Move();
		}
	}

}