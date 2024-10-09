#include <iostream>
#include <string>
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

int main(int argc, const char* argv[]) {
	
	//Exercice 1
	/*Vector2 Vect;

	std::cout << Vect.GetPositionX() << " ";
	std::cout << Vect.GetPositionY() << std::endl;

	Vect.SetPositionX(1f);
	Vect.SetPositionY(2f);

	std::cout << Vect.GetPositionX() << " ";
	std::cout << Vect.GetPositionY() << std::endl;*/
	

	//Exercice 2
	/*Entity entity;
	std::cout << entity.GetPositionX() << " ";
	std::cout << entity.GetPositionY() << std::endl;


	entity.SetPositionX(5.5);
	entity.SetPositionY(2.3);

	std::cout << entity.GetPositionX() << " ";
	std::cout << entity.GetPositionY() << std::endl;

	return 0;*/


	//Exercice 10

	StaticObject st(0.f, 0.f);


	/*Player* player = new Player(0.f, 0.f, 50.f, 0.f, 0.f);
	Mob* mob = new Mob(3.f, 3.f, 50.f, 5.f, 5.f);

	player->Attack(mob, 10.f);
	player->GetMaxHP();*/
	
}


//std::stringstream sStream;
//sStream << "Point position (x : " << x << ", y : " << y << " )";
//std::cout << sStream.str() << std::endl;