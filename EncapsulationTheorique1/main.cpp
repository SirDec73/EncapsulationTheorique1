#include <iostream>
#include <string>
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include "Integer.h"
#include "World.h"

int main(int argc, const char* argv[]) {
	
	// Operator
	/*Integer i1(1000);
	Integer i2(1000);

	Integer i3(5);
	i3.pow(6);
	std::cout << i3.GetNumber() << std::endl;*/






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

	/*StaticObject so(5.3f, 6.3f);
	Player player(0.f, 0.f, 50.f, 0.f, 0.f,1.f);
	Mob mob(2.f, 2.f, 50.f, 5.f, 0.f,1.f);

	player.Attack(mob, 10);
	player.TakeDamage(10);
	mob.Move(so);*/


	//Exercice 11

	World TheWorld;

	TheWorld.Init();

	do {
		TheWorld.Step();
	} while (!TheWorld.CheckEnd());

	 
	return 0;
}


//std::stringstream sStream;
//sStream << "Point position (x : " << x << ", y : " << y << " )";
//std::cout << sStream.str() << std::endl;