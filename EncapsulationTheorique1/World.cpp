#include <iostream>
#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include "World.h"
#include "Vector2.h"

World::World() :existingMob(false) {

}

void World::ExistingMob() {
	existingMob = false;
	for (Entity* e : vEntity) {
		if (dynamic_cast<Mob*>(e)) {
			existingMob = true;
			return;
		}
	}
}

void World::EraseDead() {
	for (int i = 0; i < vEntity.size(); i++) {
		if (dynamic_cast<Alive*>(vEntity[i]) != nullptr) {
			if (dynamic_cast<Alive*>(vEntity[i])->GetActualHP() <= 0) {
				vEntity.erase(vEntity.begin() + i);
			}
		}
	}
}

bool World::CheckEnd() {
	for (Entity* e : vEntity) {
		if (dynamic_cast<Alive*>(e) != nullptr) {
			if (dynamic_cast<Player*>(e) == nullptr) {
				if (dynamic_cast<Alive*>(e)->GetActualHP() > 0) {
					return false;
				}
			}
		}
	}
	std::cout << "Simulation Finished !";
	return true;
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

	ExistingMob();
}

float World::GetDistanceBetween(Entity* e1, Entity* e2) {

	float distanceX = e2->GetPositionX() - e1->GetPositionX();
	float distanceY = e2->GetPositionY() - e1->GetPositionY();

	float distance = sqrt(distanceX * distanceX + distanceY * distanceY);
	return distance;
}

void World::Step() {

	std::cout << std::endl;
	EraseDead();
	ExistingMob();

	for (Entity* e : vEntity) {

		Mob* mob = dynamic_cast<Mob*>(e);
		Player* player = dynamic_cast<Player*>(e);

		if (mob) {
			for (Entity* entity : vEntity) {
				BreakableObject* breakableObject = dynamic_cast<BreakableObject*>(entity);
				if (breakableObject) {
					mob->Move(*breakableObject);
					break;
				}
			}
		}

		if (player) {

			for (Entity* entity : vEntity) {
				if (existingMob) {
					Mob* targetMob = dynamic_cast<Mob*>(entity);
					if (targetMob) {
						player->Move(*targetMob);
						float distanceBetween = GetDistanceBetween(player, targetMob);
						std::cout << distanceBetween << std::endl;
						if (abs(distanceBetween) <= 1) {
							player->Attack(targetMob, 10);
							break;
						}
					}
				}
				else {
					BreakableObject* targetBreakableObject = dynamic_cast<BreakableObject*>(entity);
					if (targetBreakableObject) {
						player->Move(*targetBreakableObject);
						float distanceBetween = GetDistanceBetween(player, targetBreakableObject);
						if (abs(distanceBetween) <= 1) {
							player->Attack(targetBreakableObject, 10);
							break;
						}
					}
				}
			}
		}

	}
	std::cout << std::endl;

}