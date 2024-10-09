#include "Entity.h"
#include "Vector2.h"
#include <iostream>

//Entity::Entity(float _x, float _y) {
//	vect.SetPositionX(_x);
//	vect.SetPositionY(_y);
//}

Entity::Entity() {
	vect.SetPositionX(0.f);
	vect.SetPositionY(0.f);
}

void Entity::SetPositionX(float _x) {
	vect.SetPositionX(_x);
}

void Entity::SetPositionY(float _y) {
	vect.SetPositionY(_y);

}

float Entity::GetPositionX() {
	std::cout << "from Entity ";
	return vect.GetPositionX();
}

float Entity::GetPositionY() {
	std::cout << "from Entity ";
	return vect.GetPositionY();
}