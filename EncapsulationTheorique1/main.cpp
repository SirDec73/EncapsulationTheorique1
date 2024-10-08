#include <iostream>
#include <vector>
#include <string>
#include "Vector2.h"
#include "Entity.h"

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
	Entity entity(12.f,-3.f);
	std::cout << entity.GetPositionX() << " ";
	std::cout << entity.GetPositionY() << std::endl;


	entity.SetPositionX(5.5);
	entity.SetPositionY(2.3);

	std::cout << entity.GetPositionX() << " ";
	std::cout << entity.GetPositionY() << std::endl;

	return 0;
}


//std::stringstream sStream;
//sStream << "Point position (x : " << x << ", y : " << y << " )";
//std::cout << sStream.str() << std::endl;